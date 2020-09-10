#include "Action.h"

Action::Action() {
    m_cost = 0;
}

Action::Action(std::string name, int cost) {
    m_name = name;
    m_cost = cost;
}

Action::~Action() {}

std::string Action::GetName() {
    return m_name;
}

int Action::GetCost() {
    return m_cost;
}

std::vector<std::string> Action::GetPreconditions() {
    return m_preconditions;
}

std::string Action::GetEffect() {
    return m_effect;
}

void Action::AddPrecondition(std::string name) {
    m_preconditions.push_back(name);
}

void Action::AddEffect(std::string name) {
    m_effect = name;
}