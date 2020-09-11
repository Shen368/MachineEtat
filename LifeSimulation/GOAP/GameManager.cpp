#include "GameManager.h"

GameManager::GameManager() {
	m_money = 0;
	m_apple = 0;
	m_soda = 0;
	m_nugget = 0;
}

GameManager::GameManager(int money, int apple, int soda, int nugget) {
	m_money = money;
	m_apple = apple;
	m_soda = soda;
	m_nugget = nugget;
}

int GameManager::GetMoney() {
	return m_money;
}

int GameManager::GetApple() {
	return m_apple;
}

int GameManager::GetSoda() {
	return m_soda;
}

int GameManager::GetNugget() {
	return m_nugget;
}

void GameManager::AddMoney(int money) {
	m_money += money;
}

void GameManager::AddApple(int apple) {
	m_apple += apple;
}

void GameManager::AddSoda(int soda) {
	m_soda += soda;
}

void GameManager::AddNugget(int nugget) {
	m_nugget += nugget;
}