#include "director.h"
#include "iostream"

void Director::construct(Builder *builder)
{
	builder->buildPart1();
	builder->buildPart2();
}