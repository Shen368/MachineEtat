#include "Human.h"

Human::Human() {
	m_life = life_max;
	m_hunger = hunger_max;
	m_thirsty = thirsty_max;
	m_tiredness = tiredness_max;
	m_temperature = 37;
}

Human::~Human(){}

std::ostream& operator<< (std::ostream& os, const Human& h) {
	os << "Life: " << h.m_life << std::endl;
	os << "Hunger: " << h.m_hunger << std::endl;
	os << "Thirsty: " << h.m_thirsty << std::endl;
	os << "Tiredness: " << h.m_tiredness << std::endl;
	os << "Temperature: " << h.m_temperature << std::endl;
	os << std::endl;
	return os;
}

int Human::getLife() {
	return m_life;
}

int Human::getHunger() {
	return m_hunger;
}

int Human::getThirsty() {
	return m_thirsty;
}

int Human::getTiredness() {
	return m_tiredness;
}

int Human::getTemperature() {
	return m_temperature;
}

void Human::setLife(int life) {
	m_life += life;
	if (m_life > life_max)
	{
		m_life = life_max;
	}
}

void Human::setHunger(int hunger) {
	m_hunger += hunger;
	if (hunger > hunger_max)
	{
		hunger = hunger_max;
	}
}

void Human::setThirsty(int thirsty) {
	m_thirsty += thirsty;
	if (thirsty > thirsty_max)
	{
		thirsty = thirsty_max;
	}
}

void Human::setTiredness(int tiredness) {
	m_tiredness += tiredness;
	if (tiredness > tiredness_max)
	{
		tiredness = tiredness_max;
	}
}

void Human::setTemperature(int temperature) {
	m_temperature += temperature;
}