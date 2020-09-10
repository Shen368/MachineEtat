#include "StateMachine.h"


StateMachine::StateMachine(States* Start, Human* jack) {

	m_state = Start;
	m_currentState = Start;
	m_jack = jack;
}

vector<States*>& StateMachine::getAllStates() {
	return m_StatesList;
}
void StateMachine::AddStates(States* nextState) {

	m_StatesList.push_back(nextState);
}
void StateMachine::checkTransition(const Human* jack) {
	size_t transitionSize = m_currentState->getTransition().size();
	for (int i = 0; i < transitionSize; i++)
	{
		Transition currentTransition = m_currentState->getTransition()[i];
		if (currentTransition.getControle())
		{
			m_currentState = m_currentState->getStateFinish()[i];
			break;
		}
	}
}
void StateMachine::ProcessState() {

}

void StateMachine::ProcessState() {

	char* output = nullptr;

	for (;;) {
		if (output != "dead") {
			cout << "GameState Day :" << m_jack.isAlive << endl;
			m_currentState->Process();
			checkTransition(m_jack);
		}
		else {
			break;
		}
	}
}

