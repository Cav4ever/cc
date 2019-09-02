#include "concreteBuilder1.h"
#include "director.h"

int main()
{
    Director director;
	Builder *builder = new ConcreteBuilder1();
	director.construct(builder);
	Product product = builder->getResult();
	product.show();

	delete builder;
    return 0;
}
