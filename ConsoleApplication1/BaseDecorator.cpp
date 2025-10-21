#include "BaseDecorator.hpp"

// constructor
BaseDecorator::BaseDecorator(BaseDecorator* nextDecorator) {
	_wrappee = nextDecorator;
}

void BaseDecorator::DoAction() {
	if (_wrappee == nullptr) return;

	_wrappee->DoAction();
}