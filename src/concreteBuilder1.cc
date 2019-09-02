#include "concreteBuilder1.h"
#include "iostream"

void ConcreteBuilder1::buildPart1()
{
	product.setNumber1(23);
}

void ConcreteBuilder1::buildPart2()
{
	product.setNumber2(3);
}

Product &ConcreteBuilder1::getResult()
{
	return product;
}