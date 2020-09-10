#pragma once
#include <iostream>

class Human
{
	private:
		int m_life;
		int m_hunger;
		int m_thirsty;
		int m_tiredness;
		int m_temperature;

		int life_max = 100;
		int hunger_max = 10;
		int thirsty_max = 10;
		int tiredness_max = 10;

	public:
		Human();
		~Human();
		friend std::ostream& operator<< (std::ostream&, const Human&);
		int GetLife();
		int GetHunger();
		int GetThirsty();
		int GetTiredness();
		int GetTemperature();
		void SetLife(int life);
		void SetHunger(int hunger);
		void SetThirsty(int thirsty);
		void SetTiredness(int tiredness);
		void SetTemperature(int temperature);
		void AddLife(int life);
		void AddHunger(int hunger);
		void AddThirsty(int thirsty);
		void AddTiredness(int tiredness);
		void AddTemperature(int temperature);
		void RemoveLife(int life);
		void RemoveHunger(int hunger);
		void RemoveThirsty(int thirsty);
		void RemoveTiredness(int tiredness);
		void RemoveTemperature(int temperature);
};