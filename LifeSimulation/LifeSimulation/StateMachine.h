#pragma once
#include "States.h"
#include "Human.h"
#include "windows.h"

using namespace std;

class StateMachine
{
	private:
		vector<States*> m_StatesList;   // Liste qui contient tout les states
		const States* m_state;
		States* m_currentState;
		Human* m_jack;

	public:
		StateMachine(States* Start, Human* jack);	// Initialiser un statemachine avec une state de depart

		vector<States*>& getAllStates();			// Recuperer la liste avec tout mes states dedans
		void AddStates(States* nextState);			// rajouter un nouveau stat dans ma m_StatesList
		void checkTransition(const Human* jack);	// Faire le control sur le stat actuel
		void ProcessState();						// Boucle qui lance la simulation de notre personnage
};