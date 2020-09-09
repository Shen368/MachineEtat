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
}

void Human::setHunger(int hunger) {
	m_life += hunger;
}

void Human::setThirsty(int thirsty) {
	m_life += thirsty;
}

void Human::setTiredness(int tiredness) {
	m_life += tiredness;
}

void Human::setTemperature(int temperature) {
	m_life += temperature;
}