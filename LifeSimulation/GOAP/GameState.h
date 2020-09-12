#pragma once
class GameState
{
private:
	int m_SwordAmount;
	int m_MoneyAmount;
	int m_ForgeronAmount;
	int m_IronAmount;
	int m_PickAxeAmount;

public:
	GameState();
	GameState(const int SwordAmount, const int MoneyAmount, const int FORGERONAmount, const int IronAmount, const int PickAxeAmount);

	const int GetSwordAmount()const { return m_SwordAmount; }
	const int GetMoneyAmount()const { return m_MoneyAmount;}
	const int GetForgeronAmount()const { return m_ForgeronAmount; }
	const int GetIronAmount()const { return m_IronAmount; }
	const int GetPickAxesAmount()const { return m_PickAxeAmount; }

	void CreateSword(const int UsedAmount);
	void CreateForgeron(const int UsedAmount);
	void FarmIron(const int UsedAmount);
	void MakePickAxe(const int UsedAmount);
	void SellSword(const int UsedAmount);
};

