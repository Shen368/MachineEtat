#pragma once
#include <iostream>

class Human
{
	private:

		bool m_life;
		bool m_thirsty;

	public:

		bool m_alive;
		bool m_hunger;
		bool m_sport;
		bool m_food;
		bool m_tiredness;
		bool m_Sleep;


		Human();
		~Human();
		Human(bool isAlive, bool isHungry, bool haveFood, bool doSport, bool isTired, bool isSleep);
		friend std::ostream& operator<< (std::ostream&, const Human&);

};