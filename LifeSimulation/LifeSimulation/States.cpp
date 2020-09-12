#include "States.h"

States::States(const char* TextOutPut) {
	m_TextOutPut = TextOutPut;
}

void States::AddTransition(Transition transi) {
	m_TransitionList.push_back(transi);					// Ajouter a la Liste de mes Transition
}

const vector<Transition>&  States::getTransition() {
	return m_TransitionList;
}

void States::AddToCanAccesList(States* states) {
	m_CanAccesStatList.push_back((states));				// Ajouter a la Liste des Stat qui peuvent qui accesible
}

const vector<States*>& States::getCanAccesList() {
	return m_CanAccesStatList;
}

void States::Process() {
	Sleep(2000);
	cout <<"Action_Message : "<< m_TextOutPut << endl;
}