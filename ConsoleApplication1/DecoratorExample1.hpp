#pragma once
#include <iostream>
#include "BaseDecorator.hpp"

class DecoratorExample1 : public BaseDecorator
{
public:
	DecoratorExample1(BaseDecorator* nextDecorator) : BaseDecorator(nextDecorator) {};
	void DoAction() override;
};

