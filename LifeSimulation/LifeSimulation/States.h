#pragma once
#include <chrono>
#include <thread>

#include "StateMachine.h"
#include "Human.h"

class StateMachine;

class States
{
private:
	int TirednessLimit = 20;

public:
	States();
	/*virtual	void Eat(StateMachine& machine,unsigned int quantity);
	virtual	void BuyFood(StateMachine& machine,unsigned int quandtity);
	virtual ~States();*/
	void sleep(Human& human);
};