#include "Action.h"

Action::Action() {
    m_name = "";
    m_cost = 1;
    m_preconditions.reserve(0);
    m_effects.reserve(0);
}

Action::Action(std::string name, int cost) {
    m_name = name;
    m_cost = cost;
    m_preconditions.reserve(0);
    m_effects.reserve(0);
}

Action::~Action() {}

const std::string Action::GetName() {
    return m_name;
}

const int Action::GetCost() {
    return m_cost;
}

std::vector<const WorldState> Action::GetPreconditions() {
    return m_preconditions;
}

std::vector<const WorldState> Action::GetEffect() {
    return m_effects;
}

void Action::SetCost(int cost) {
    m_cost = cost;
}

void Action::AddPrecondition(const WorldState name) {
    m_preconditions.push_back(name);
}

void Action::AddEffect(const WorldState name) {
    m_effects.push_back(name);
}