#pragma once
#include "States.h"
#include "Human.h"
#include "windows.h"

using namespace std;


class StateMachine
{
	private:
		vector<States*> m_StatesList;
		const States* m_state;
		States* m_currentState;
		Human* m_jack;



	public:
		//StateMachine();
		StateMachine(States* Start, Human* jack);

		vector<States*>& getAllStates();
		void AddStates(States* nextState);
		void checkTransition(const Human* jack);
		void ProcessState();

};