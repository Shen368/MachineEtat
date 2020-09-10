#include "Action.h"

Action::Action() {
    m_cost = 0;
}

Action::Action(std::string name, int cost) {
    m_name = name;
    m_cost = cost;
}

std::string Action::GetName() {
    return m_name;
}

int Action::GetCost() {
    return m_cost;
}

std::string Action::GetPrecondition() {
    return m_precondition;
}

std::string Action::GetEffect() {
    return m_effect;
}

void Action::AddPrecondition(std::string name) {
    m_precondition = name;
}

void Action::AddEffect(std::string name) {
    m_effect = name;
}