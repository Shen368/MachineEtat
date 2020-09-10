#pragma once
#include <iostream>

class Action
{
private:
    std::string m_name;
    int m_cost;
    std::string m_precondition;
    std::string m_effect;

public:
    Action();
    Action(std::string name, int cost = 0);
    std::string GetName();
    int GetCost();
    std::string GetPrecondition();
    std::string GetEffect();
    void AddPrecondition(std::string name);
    void AddEffect(std::string name);
};