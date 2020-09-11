#include "States.h"


States::States(const char* TextOutPut) {
	m_TextOutPut = TextOutPut;
}

void States::AddTransition(Transition transi) {
	m_TransitionList.push_back(transi);
}

const vector<Transition>&  States::getTransition() {

	return m_TransitionList;
}

void States::AddToCantAccesList(States* states) {
	m_CantAccesStatList.push_back((states));
}

const vector<States*>& States::getCantAccesList() {
	return m_CantAccesStatList;
}

void States::Process() {
	Sleep(2000);
	cout <<"Action_Message : "<< m_TextOutPut << endl;
}