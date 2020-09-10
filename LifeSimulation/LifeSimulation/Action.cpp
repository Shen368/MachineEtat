#include "Action.h"

Action::Action() {
    m_cost = 0;
}

Action::Action(std::string name, int cost = 0) {
    m_name = name;
    m_cost = cost;
}