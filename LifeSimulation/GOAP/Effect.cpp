#include "Effect.h"

Effect::Effect() {
	m_name = WorldState::EPEE;
}

Effect::Effect(WorldState name) {
	m_name = name;
}

Effect::~Effect() {}

void Effect::ProcessAction() {}