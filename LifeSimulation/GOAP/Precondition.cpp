#include "Precondition.h"

Precondition::Precondition() {
    m_name = WorldState::EPEE;
    m_condition = [](GameManager* gameManager) {
        return true;
    };
}

Precondition::Precondition(WorldState name, bool(*condition)(GameManager*)) {
    m_name = name;
    m_condition = condition;
}

Precondition::~Precondition() {}

bool Precondition::Process(GameManager* gameManager) {
    return m_condition(gameManager);
}