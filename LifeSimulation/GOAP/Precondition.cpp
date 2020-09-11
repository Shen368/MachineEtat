#include "Precondition.h"

Precondition::Precondition() {
    m_name = WorldState::EPEE;
}

Precondition::Precondition(WorldState name) {
    m_name = name;
}

Precondition::~Precondition() {}

WorldState Precondition::GetName() {
    return m_name;
}

bool Precondition::Process() {}