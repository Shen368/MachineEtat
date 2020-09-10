#include "StateMachine.h"


StateMachine::StateMachine(unsigned int CurrentQuantity) {
	m_FoodQuantity = CurrentQuantity;
	if (CurrentQuantity > 0) {
		m_state = new states();
	}

}

StateMachine::~StateMachine() {
	delete m_state;
}



void StateMachine::ProcessState() {

}

void StateMachine::Eat(unsigned int quantity) {
	m_state->Eat(*this, quantity);

}

void StateMachine::BuyFood(unsigned int quantity) {
	m_state->BuyFood(*this, quantity);

}

unsigned int StateMachine::getCurrentFood() {
	
	return m_FoodQuantity;
}