#include "Effect.h"

Effect::Effect() {
	m_name = "";
	addRessource = [](GameManager* gameManager) {};
}

Effect::Effect(std::string name, void(*ressource)(GameManager* gameManager)) {
	m_name = name;
	addRessource = ressource;
}

Effect::~Effect() {}

void Effect::ProcessAction(GameManager* gameManager) {
	addRessource(gameManager);
}