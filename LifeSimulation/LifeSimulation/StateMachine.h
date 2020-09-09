#pragma once
#include<vector>
#include<iostream>
using namespace std;


class StateMachine
{
	private:
		vector<string> m_state;

	public:

		StateMachine();
		void ProcessState();

};

