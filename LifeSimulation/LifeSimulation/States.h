#pragma once
#include "StateMachine.h"
#include <exception>
#include <stdexcept>

class StateMachine;

class States
{
public:


};


class Finish : public States {
public:
	Finish();
	virtual	void Eat(StateMachine& machine, unsigned int quantity);
	virtual	void BuyFood(StateMachine& machine, unsigned int quandtity);
	virtual ~Finish();

protected:
	void setState(StateMachine& machine, States* stat);
	void updateQuantity(StateMachine& machine, unsigned int quandtity);
};
