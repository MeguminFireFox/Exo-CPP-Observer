#pragma once
#include <iostream>
#include "BaseDecorator.hpp"

class DecoratorExample2 : public BaseDecorator
{
public:
	DecoratorExample2(BaseDecorator* nextDecorator) : BaseDecorator(nextDecorator) {};
	void DoAction() override;
};

