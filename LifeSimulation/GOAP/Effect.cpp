#include "Effect.h"

Effect::Effect() {
	m_name = WorldState::EPEE;
}

Effect::Effect(WorldState name) {
	m_name = name;
}

Effect::~Effect() {}

WorldState Effect::GetName() {
	return m_name;
}

void Effect::ProcessAction() {}