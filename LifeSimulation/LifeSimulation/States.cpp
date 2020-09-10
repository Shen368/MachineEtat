#include "States.h"



void Finish::Eat(StateMachine& machine, unsigned int quantity) {
	int CurrentQuantity = machine.getCurrentFood();
	if (CurrentQuantity < quantity) {
		throw runtime_error("Not enough Quantity");
	}

	updateQuantity(machine, CurrentQuantity - quantity);

	if (machine.getCurrentFood() == 0) {
		setState(machine, new Finish());
	}
}

void Finish::BuyFood(StateMachine& machine, unsigned int quandtity) {
	int CurrentQuantity = machine.getCurrentFood();
	updateQuantity(machine, CurrentQuantity + quandtity);
}
