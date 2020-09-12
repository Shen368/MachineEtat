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
	vector<Transition> m_TransitionList;    // Liste de Transition
	vector<States*> m_CanAccesStatList;		// Liste des States qui peuvent etres acceder
	const char* m_TextOutPut;				// Text visuel pour voir les etat dans la console

public:
	States(const char* TextOutPut);

	// Transition
	void AddTransition(Transition transi);
	const vector<Transition>& getTransition();

	// AccesList
	void AddToCanAccesList(States* states);
	const vector<States*>& getCanAccesList();

	// Recupere le current Action et l'affiche
	void Process();
};