#include "Human.h"

Human::Human() {
}

Human::~Human() {}

Human::Human(bool isAlive, bool isHungry, bool haveFood, bool doSport, bool isTired, bool isSleep) {
	 m_alive = isAlive;
	 m_hunger = isHungry;
	 m_food = haveFood;
	 m_sport = doSport;
	 m_tiredness = isTired;
	 m_Sleep = isSleep;

}

std::ostream& operator<< (std::ostream& os, const Human& h) {
	os << "Life: " << h.m_life << std::endl;
	os << "Hunger: " << h.m_hunger << std::endl;
	os << "Thirsty: " << h.m_thirsty << std::endl;
	os << "Tiredness: " << h.m_tiredness << std::endl;
	os << std::endl;
	return os;
}
