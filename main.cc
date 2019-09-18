#include <iostream>
#include <string>
#include <list>

using namespace std;

class Element;

class Visitor
{
    public:
        virtual void visitConcreteElementA(Element *ele) = 0;
        virtual void visitConcreteElementB(Element *ele) = 0;
};

class ConcreteVisitor1: public Visitor
{
    public:
        virtual void visitConcreteElementA(Element *ele) {
            cout<<"ConcreteVisitor1: visitConcreteElementA" <<endl;
        }

        virtual void visitConcreteElementB(Element *ele) {
            cout<<"ConcreteVisitor1: visitConcreteElementB" <<endl;
        }
};

class ConcreteVisitor2: public Visitor
{
    public:
        virtual void visitConcreteElementA(Element *ele) {
            cout<<"ConcreteVisitor2: visitConcreteElementA" <<endl;
        }

        virtual void visitConcreteElementB(Element *ele) {
            cout<<"ConcreteVisitor2: visitConcreteElementB" <<endl;
        }
};

class Element
{
    public:
        virtual void accept(Visitor *vis) = 0;
};

class ConcreteElementA: public Element
{
    public:
        virtual void accept(Visitor *vis) {
            vis->visitConcreteElementA(this);
        }
};

class ConcreteElementB: public Element
{
    public:
        virtual void accept(Visitor *vis) {
            vis->visitConcreteElementB(this);
        }
};

class ObjectStructre
{
    private:
        list<Element *> elements;
    public:
        void attach(Element *ele) {
            elements.push_back(ele);
        }
        void detach(Element *ele) {
            elements.remove(ele);
        }
        void accept(Visitor *vis) {
            list<Element *>::iterator it = elements.begin();
            for (; it != elements.end(); it++) {
                (*it)->accept(vis);
            }
        }
};

int main()
{
    ObjectStructre o;
    Element *eleA = new ConcreteElementA();
    Element *eleB = new ConcreteElementB();
    Visitor *vis1 = new ConcreteVisitor1();
    Visitor *vis2 = new ConcreteVisitor2();
    o.attach(eleA);
    o.attach(eleB);
    o.accept(vis1);
    o.accept(vis2);

    delete eleA;
    delete eleB;
    delete vis1;
    delete vis2;
    return 0;
}