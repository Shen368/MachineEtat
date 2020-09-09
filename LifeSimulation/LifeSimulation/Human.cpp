#include "Human.h"

Human::Human() {
	m_life = 100;
	m_hunger = 10;
	m_thirsty = 10;
	m_tiredness = 10;
	m_temperature = 20;
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
	if (m_life > 100)
	{
		m_life = 100;
	}
}

void Human::setHunger(int hunger) {
	m_hunger += hunger;
	if (hunger > 10)
	{
		hunger = 10;
	}
}

void Human::setThirsty(int thirsty) {
	m_thirsty += thirsty;
	if (thirsty > 10)
	{
		thirsty = 10;
	}
}

void Human::setTiredness(int tiredness) {
	m_tiredness += tiredness;
	if (tiredness > 10)
	{
		tiredness = 10;
	}
}

void Human::setTemperature(int temperature) {
	m_temperature += temperature;
	if (temperature > 20)
	{
		temperature = 20;
	}
}