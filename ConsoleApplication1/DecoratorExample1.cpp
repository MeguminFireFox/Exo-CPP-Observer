#include <iostream>
#include "DecoratorExample1.hpp"

void DecoratorExample1::DoAction()
{
	std::cout << "Bim" << std::endl;
	BaseDecorator::DoAction();
}