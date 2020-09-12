#pragma once
#include <iostream>
#include <vector>

const enum class WorldState {
    FABRIQUER_EPEE,
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
    std::vector<const WorldState> m_preconditions;
    std::vector<const WorldState> m_effects;

public:
    Action();
    Action(const std::string name, const int cost = 1);
    ~Action();

    const std::string GetName();
    const int GetCost();
    std::vector<const WorldState> GetPreconditions();
    std::vector<const WorldState> GetEffect();

    void SetCost(int cost);

    void AddPrecondition(const WorldState name);
    void AddEffect(const WorldState name);
};