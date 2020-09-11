#pragma once

class GameManager
{
private:
	int m_money;
	int m_apple;
	int m_soda;
	int m_nugget;

public:
	GameManager();
	GameManager(int money, int apple, int soda, int nugget);

	int GetMoney();
	int GetApple();
	int GetSoda();
	int GetNugget();

	void AddMoney(int money);
	void AddApple(int apple);
	void AddSoda(int soda);
	void AddNugget(int nugget);
};