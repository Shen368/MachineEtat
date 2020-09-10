#pragma once
#include <iostream>

class Human
{
	private:

		int m_tiredness;
		int m_temperature;
		bool m_alive;

		int m_life_max = 20;
		int m_hunger_max = 10;
		int m_thirsty_max = 10;
		int m_tiredness_max = 10;

	public:

		bool m_life;
		bool m_hunger;
		bool m_thirsty;
		bool m_food;

		Human();
		~Human();
		Human(bool isAlive, bool isHungry,  bool isThirsty,bool haveFood );
		friend std::ostream& operator<< (std::ostream&, const Human&);
		int GetLife();
		int GetHunger();
		int GetThirsty();
		int GetTiredness();
		int GetTemperature();
		bool GetAlive();
		void SetLife(int life);
		void SetHunger(int hunger);
		void SetThirsty(int thirsty);
		void SetTiredness(int tiredness);
		void SetTemperature(int temperature);
		void SetAlive(bool alive);
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