#pragma once
#include <chrono>
#include <thread>

#include "Human.h"
#include "StateMachine.h"

class StateMachine;

class States
{
private:
public:
	States();
	/*virtual	void Eat(StateMachine& machine,unsigned int quantity);
	virtual	void BuyFood(StateMachine& machine,unsigned int quandtity);
	virtual ~States();*/
	void sleep(Human& human);
};