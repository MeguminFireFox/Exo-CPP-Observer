#include "BaseDecorator.hpp"

class Arm {
public:
	BaseDecorator* Decorator = nullptr;

	void Input();
};