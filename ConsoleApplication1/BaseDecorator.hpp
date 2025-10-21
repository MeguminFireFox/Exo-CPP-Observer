#pragma once
class BaseDecorator {

public:
	virtual void DoAction();

protected:
	// constructor
	BaseDecorator(BaseDecorator* nextDecorator = nullptr);

private:
	BaseDecorator* _wrappee;
};