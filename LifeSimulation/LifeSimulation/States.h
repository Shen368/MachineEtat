#pragma once
#include <exception>
#include <stdexcept>
#include <chrono>
#include <thread>

//#include "Human.h"
#include "StateMachine.h"


class States
{
private:
	vector<Transition> m_TransitionList;
	vector<States*> m_StateFinish;
	const char* m_TextOutPut;

public:

	States(const char* TextOutPut);

	//Transition
	void AddTransition(Transition transi);
	void setTransition(vector<Transition> ListTrans);
	const vector<Transition>& getTransition();

	//
	void AddToFinishedList(States* states);

	// get / set m_StateFinish
	const vector<States*>& getStateFinish();
	void setStateFinish(vector<States*>& NextStateFinish);

	// current Action
	void Process();




};
