#pragma once
#include<vector>
#include<iostream>

#include "States.h"
#include "Transition.h"
#include "Human.h"

using namespace std;

class StateMachine
{
	private:
		const States* m_state;
		States* m_currentState;
		Human* m_jack;
		vector<States*> m_StatesList;


	public:
		StateMachine();
		StateMachine(States* Start, Human* jack);

		vector<States*>& getAllStates();
		void AddStates(States* nextState);
		void checkTransition(const Human* jack);
		void ProcessState();

};