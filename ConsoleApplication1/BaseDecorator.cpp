#include "BaseDecorator.hpp"

// constructor
BaseDecorator::BaseDecorator(BaseDecorator* nextDecorator) {
	_wrappee = nextDecorator;
}

void BaseDecorator::DoAction() {
	_wrappee->DoAction();
}