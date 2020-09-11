#pragma once
#include <exception>
#include <stdexcept>
#include <chrono>
#include <thread>

#include "Human.h"
#include "StateMachine.h"
#include "States.h"
#include "Transition.h"

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
	const vector<Transition>& getTransition();
	void setTransition(vector<Transition> ListTrans);


	//Finished
	void AddToCantAccesList(const States states);
	void AddToCantAccesList(States* states);
	const vector<States*>& getCantAccesList();
	void setCantAccesList(vector<States*>& NextStateFinish);

	// current Action
	void Process();




};
