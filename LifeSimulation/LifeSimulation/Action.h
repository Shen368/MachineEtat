#pragma once
#include <iostream>
#include <vector>

class Action
{
private:
    std::string m_name;
    int m_cost;
    std::vector<std::string> m_preconditions;
    std::string m_effect;

public:
    Action();
    Action(std::string name, int cost = 0);
    ~Action();

    std::string GetName();
    int GetCost();
    std::vector<std::string> GetPreconditions();
    std::string GetEffect();

    void AddPrecondition(std::string name);
    void AddEffect(std::string name);
};