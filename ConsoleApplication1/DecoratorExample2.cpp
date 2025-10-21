#include <iostream>
#include "DecoratorExample2.hpp"

void DecoratorExample2::DoAction()
{
	std::cout << "Bam" << std::endl;
	BaseDecorator::DoAction();
}