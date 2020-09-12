#include "Effect.h"

Effect::Effect() {
	m_name = WorldState::FABRIQUER_EPEE;
}

Effect::Effect(const WorldState name) {
	m_name = name;
}

Effect::~Effect() {}

const WorldState Effect::GetName() {
	return m_name;
}

void Effect::ProcessAction() {}