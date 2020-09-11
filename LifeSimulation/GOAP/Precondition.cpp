#include "Precondition.h"

Precondition::Precondition() {
    m_name = WorldState::EPEE;
}

Precondition::Precondition(WorldState name) {
    m_name = name;
}

Precondition::~Precondition() {}

bool Precondition::Process() {
}