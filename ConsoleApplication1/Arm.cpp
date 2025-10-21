#include <iostream>

#include "Arm.hpp"

void Arm::Input()
{
	std::cout << "Base Arm Behaviouuuur!" << std::endl;
	if(Decorator != nullptr) Decorator->DoAction();
}
