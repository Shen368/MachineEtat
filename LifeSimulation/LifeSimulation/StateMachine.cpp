#include "StateMachine.h"


StateMachine::StateMachine(){

	
}

StateMachine::~StateMachine() {
	delete m_state;
}

void StateMachine::CreateStateMachine(){

	States* start = new States("Start State");
	States* end = new States("End State");
	Transition* transition = new Tansition();
	start->AddTransition(transition, end);
}

void StateMachine::ProcessState() {

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