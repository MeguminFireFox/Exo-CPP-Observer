#pragma once
class BaseDecorator {
public:
	virtual void DoAction();

protected:
	// constructor
	BaseDecorator(BaseDecorator* nextDecorator);

private:
	BaseDecorator* _wrappee;
};