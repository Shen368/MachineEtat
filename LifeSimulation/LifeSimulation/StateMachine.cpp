#include "StateMachine.h"

StateMachine::StateMachine(){
}

StateMachine::~StateMachine() {
	delete m_state;
}

void StateMachine::ProcessState() {
	States* currentState = m_currentState;
	for (int i = 0; i < currentState->TransitionList.size(); ++i) {
		if(currentState->m_transition[i])
			ChangeState(currentState->)
	}
}


/*
void StateMachine::Eat(unsigned int quantity) {
	m_state->Eat(*this, quantity);
}

void StateMachine::BuyFood(unsigned int quantity) {
	m_state->BuyFood(*this, quantity);
}

unsigned int StateMachine::getCurrentFood() {
	return m_FoodQuantity;
}
*/