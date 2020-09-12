#include "GameState.h"

GameState::GameState() {
	m_SwordAmount = 0;;
	m_MoneyAmount = 100;
	m_ForgeronAmount = 1;
	m_IronAmount = 0;
	m_PickAxeAmount = 1;
}

GameState::GameState(const int SwordAmount, const int MoneyAmount, const int FORGERONAmount, const int IronAmount, const int PickAxeAmount){
	m_SwordAmount = SwordAmount;
	m_MoneyAmount = MoneyAmount;
	m_ForgeronAmount = FORGERONAmount;
	m_IronAmount = IronAmount;
	m_PickAxeAmount = PickAxeAmount;

}

void GameState::CreateSword(const int UsedAmount) {
	m_ForgeronAmount -= UsedAmount;
	m_IronAmount -= UsedAmount;
	m_SwordAmount += UsedAmount;

}
void GameState::CreateForgeron(const int UsedAmount) {
	m_MoneyAmount -= UsedAmount;
	m_ForgeronAmount += UsedAmount;

}
void GameState::FarmIron(const int UsedAmount) {
	m_ForgeronAmount -= UsedAmount;
	m_PickAxeAmount -= UsedAmount;
	m_IronAmount += UsedAmount;
}
void GameState::MakePickAxe(const int UsedAmount) {
	m_MoneyAmount -= UsedAmount;
	m_IronAmount += UsedAmount;
}

void GameState::SellSword(const int UsedAmount){
	m_SwordAmount -= UsedAmount;
	m_MoneyAmount += UsedAmount;
}