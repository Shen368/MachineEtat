#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "windows.h"
#include "Transition.h"

using namespace std;

class States
{
private:
	vector<Transition> m_TransitionList;
	vector<States*> m_CantAccesStatList;
	const char* m_TextOutPut;

public:

	States(const char* TextOutPut);

	//Transition
	void AddTransition(Transition transi);
	const vector<Transition>& getTransition();


	//AccesList
	void AddToCantAccesList(const States states);
	void AddToCantAccesList(States* states);
	const vector<States*>& getCantAccesList();

	// current Action
	void Process();




};
