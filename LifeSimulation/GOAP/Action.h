#pragma once
#include <iostream>
#include <vector>

enum WorldState {
    FORGERON,
    FER,
    PIOCHE,
    EPEE,
    ARGENT,
    POSITIONER
};

class Action
{
private:
    std::string m_name;
    int m_cost;
    std::vector<WorldState> m_preconditions;
    std::vector<WorldState> m_effect;

public:
    Action();
    Action(std::string name, int cost = 0);
    ~Action();

    std::string GetName();
    int GetCost();
    std::vector<std::string> GetPreconditions();
    std::string GetEffect();

    void SetCost(int cost);

    void AddPrecondition(std::string name);
    void AddEffect(std::string name);
};