#pragma once
#include <iostream>

#include "Action.h"

class Effect
{
private:
	WorldState m_name;

public:
	Effect();
	Effect(WorldState name);
	~Effect();

	WorldState GetName();
		
	void ProcessAction();
};