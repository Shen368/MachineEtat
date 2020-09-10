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

	void AddTransition(Transition* transi, States* EndStat);
	void Process(unsigned int quandtity);

private:
	vector<Transition*> TransitionList;

};

class Manger :public States {

public:
	virtual void Process(unsigned int quantity);

};
