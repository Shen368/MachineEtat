#pragma once
#include<vector>
#include<iostream>

using namespace std;

class states;
class StateMachine
{
	private:
		states* m_state;
		unsigned int m_FoodQuantity;

	public:

		StateMachine(unsigned int CurrentQuantity);
		~StateMachine();
		void ProcessState();
		unsigned int getCurrentFood();
		void Eat(unsigned int quantity);
		void BuyFood(unsigned int quandtity);
};