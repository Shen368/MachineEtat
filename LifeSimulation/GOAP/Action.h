#pragma once
#include <iostream>
#include <vector>

enum WorldState {
    EPEE,
    FORGERON,
    FER,
    PIOCHE,
    ARGENT,
    POSITIONER
};

class Action
{
private:
    std::string m_name;
    int m_cost;
    std::vector<WorldState> m_preconditions;
    std::vector<WorldState> m_effects;

public:
    Action();
    Action(std::string name, int cost = 0);
    ~Action();

    std::string GetName();
    int GetCost();
    std::vector<WorldState> GetPreconditions();
    std::vector<WorldState> GetEffect();

    void SetCost(int cost);

    void AddPrecondition(WorldState name);
    void AddEffect(WorldState name);
};