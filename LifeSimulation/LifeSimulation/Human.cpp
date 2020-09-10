#include "Human.h"

Human::Human() {
	m_life = m_life_max;
	m_hunger = m_hunger_max;
	m_thirsty = m_thirsty_max;
	m_tiredness = m_tiredness_max;
	m_temperature = 37;
}

Human::~Human() {}

Human::Human(bool isAlive, bool isHungry, bool isThirsty, bool haveFood) {
	 m_life = isAlive;
	 m_hunger = isHungry;
	 m_thirsty = isThirsty;
	 m_food = haveFood;
}

std::ostream& operator<< (std::ostream& os, const Human& h) {
	os << "Life: " << h.m_life << std::endl;
	os << "Hunger: " << h.m_hunger << std::endl;
	os << "Thirsty: " << h.m_thirsty << std::endl;
	os << "Tiredness: " << h.m_tiredness << std::endl;
	os << "Temperature: " << h.m_temperature << std::endl;
	os << std::endl;
	return os;
}

int Human::GetLife() {
	return m_life;
}

int Human::GetHunger() {
	return m_hunger;
}

int Human::GetThirsty() {
	return m_thirsty;
}

int Human::GetTiredness() {
	return m_tiredness;
}

int Human::GetTemperature() {
	return m_temperature;
}

bool Human::GetAlive() {
	return m_alive;
}

void Human::SetLife(int life) {
	m_life = life;
	if (m_life > m_life_max) {
		m_life = m_life_max;
	}
}

void Human::SetHunger(int hunger) {
	m_hunger = hunger;
	if (hunger > m_hunger_max) {
		hunger = m_hunger_max;
	}
}

void Human::SetThirsty(int thirsty) {
	m_thirsty = thirsty;
	if (thirsty > m_thirsty_max) {
		thirsty = m_thirsty_max;
	}
}

void Human::SetTiredness(int tiredness) {
	m_tiredness = tiredness;
	if (tiredness > m_tiredness_max) {
		tiredness = m_tiredness_max;
	}
}

void Human::SetTemperature(int temperature) {
	m_temperature = temperature;
}

void Human::SetAlive(bool alive) {
	m_alive = alive;
}

void Human::AddLife(int life) {
	m_life += life;
	if (m_life > m_life_max) {
		m_life = m_life_max;
	}
}

void Human::AddHunger(int hunger) {
	m_hunger += hunger;
	if (hunger > m_hunger_max) {
		hunger = m_hunger_max;
	}
}

void Human::AddThirsty(int thirsty) {
	m_thirsty += thirsty;
	if (thirsty > m_thirsty_max) {
		thirsty = m_thirsty_max;
	}
}

void Human::AddTiredness(int tiredness) {
	m_tiredness += tiredness;
	if (tiredness > m_tiredness_max) {
		tiredness = m_tiredness_max;
	}
}

void Human::AddTemperature(int temperature) {
	m_temperature += temperature;
}

void Human::RemoveLife(int life) {
	m_life -= life;
	if (m_life > m_life_max) {
		m_life = m_life_max;
	}
}

void Human::RemoveHunger(int hunger) {
	m_hunger -= hunger;
	if (hunger > m_hunger_max) {
		hunger = m_hunger_max;
	}
}

void Human::RemoveThirsty(int thirsty) {
	m_thirsty -= thirsty;
	if (thirsty > m_thirsty_max) {
		thirsty = m_thirsty_max;
	}
}

void Human::RemoveTiredness(int tiredness) {
	m_tiredness -= tiredness;
	if (tiredness > m_tiredness_max) {
		tiredness = m_tiredness_max;
	}
}

void Human::RemoveTemperature(int temperature) {
	m_temperature -= temperature;
}