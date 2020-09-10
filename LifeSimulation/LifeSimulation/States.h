#pragma once
#include <exception>
#include <stdexcept>
#include <chrono>
#include <thread>

//#include "Human.h"
#include "StateMachine.h"

class StateMachine;

class States
{
public:
	//States();
	/*virtual	void Eat(StateMachine& machine,unsigned int quantity);
	virtual	void BuyFood(StateMachine& machine,unsigned int quandtity);
	virtual ~States();*/
	//void sleep(Human& human);
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