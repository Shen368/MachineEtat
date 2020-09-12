#include "Precondition.h"

Precondition::Precondition() {
    m_name = WorldState::FABRIQUER_EPEE;
}

Precondition::Precondition(const WorldState name) {
    m_name = name;
}

Precondition::~Precondition() {}

const WorldState Precondition::GetName() {
    return m_name;
}

bool Precondition::Process() {}