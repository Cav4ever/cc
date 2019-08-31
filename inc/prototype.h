#ifndef _PROTOTYPE_H
#define _PROTOTYPE_H

class Prototype
{
    protected:
        char *name;
    public:
        Prototype(const char *name);
        Prototype(const Prototype &obj);
        Prototype &operator=(const Prototype &obj);
        virtual ~Prototype();
        void setName(const char *name);
        virtual Prototype *clone() const = 0;
};

#endif