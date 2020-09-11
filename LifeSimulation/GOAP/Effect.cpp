#include "Effect.h"

Effect::Effect() {
	m_name = WorldState::EPEE;
	addRessource = [](GameManager* gameManager) {};
}

Effect::Effect(WorldState name, void(*ressource)(GameManager* gameManager)) {
	m_name = name;
	addRessource = ressource;
}

Effect::~Effect() {}

void Effect::ProcessAction(GameManager* gameManager) {
	addRessource(gameManager);
}