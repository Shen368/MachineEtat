#include "States.h"


States::States(const char* TextOutPut) {
	m_TextOutPut = TextOutPut;
}

void States::AddTransition(Transition transi) {
	m_TransitionList.push_back(transi);
}

void States::setTransition(vector<Transition> ListTrans) {
	m_TransitionList = ListTrans;
}

const vector<Transition>&  States::getTransition() {

	return m_TransitionList;
}

void States::AddToFinishedList(States* states) {
	m_StateFinish.push_back((states));
}

const vector<States*>& States::getStateFinish() {
	return m_StateFinish;
}

void States::setStateFinish(vector<States*>& NextStateFinish) {
	m_StateFinish = NextStateFinish;
}

void States::Process() {
	cout <<"Action_Message : "<< m_TextOutPut << endl;
}