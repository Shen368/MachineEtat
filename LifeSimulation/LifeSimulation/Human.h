﻿#pragma once
#include <iostream>

class Human
{
	private:
		int m_life;
		int m_hunger;
		int m_thirsty;
		int m_tiredness;
		int m_temperature;

	public:
		Human();
		~Human();
		friend std::ostream& operator<< (std::ostream&, const Human&);
		int getLife();
		int getHunger();
		int getThirsty();
		int getTiredness();
		int getTemperature();
		void setLife(int life);
		void setHunger(int hunger);
		void setThirsty(int thirsty);
		void setTiredness(int tiredness);
		void setTemperature(int temperature);
};