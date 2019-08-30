#include "concreteDecoratorA.h"
#include "concreteDecoratorB.h"
#include "concreteComponent.h"

int main()
{
   Component *component = new ConcreteComponent();
   Decorator *dec1 = new ConcreteDecoratorA(component);
   Decorator *dec2 = new ConcreteDecoratorB(dec1);
   dec2->operation();

   delete []component;
   delete []dec1;
   delete []dec2;
   return 0;
}