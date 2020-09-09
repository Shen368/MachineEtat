#include "StateMachine.h"


StateMachine::StateMachine() {
	m_state.push_back("Healing");
	m_state.push_back("Eating");
	m_state.push_back("Drinking");
	m_state.push_back("Tired");
	m_state.push_back("Cold");
	m_state.push_back("Good");
	m_state.push_back("Hot");
	m_state.push_back("Nothing");
}

void StateMachine::ProcessState() {



}