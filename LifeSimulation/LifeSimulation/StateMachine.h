#pragma once
#include<vector>
#include<iostream>

#include "States.h"
#include "Transition.h"

using namespace std;

class StateMachine
{
	private:
		States* m_state;
		Transition* m_transition;
		unsigned int m_FoodQuantity;

	public:

		~StateMachine();
		void CreateStateMachine();
		void ProcessState();

		/*
		unsigned int getCurrentFood();
		void Eat(unsigned int quantity);
		void BuyFood(unsigned int quandtity);
		*/
};