#pragma once
#include<vector>
#include<iostream>

#include "States.h"
#include "Transition.h"

using namespace std;

class StateMachine
{
	private:
		States* m_state;
		States* m_currentState;

	public:
		~StateMachine();
		void ProcessState();
};