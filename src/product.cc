#include "product.h"
#include "iostream"

void Product::setNumber1(int n)
{
	number[0] = n;
}

void Product::setNumber2(int n)
{
	number[1] = n;
}

void Product::show()
{
	std::cout<< "Lebron James: " << number[0] <<std::endl;
	std::cout<< "Anthony Davis: " << number[1] <<std::endl;
}