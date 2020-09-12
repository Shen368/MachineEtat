#pragma once
#include <iostream>

#include "Action.h"

class Effect
{
private:
	WorldState m_name;

public:
	Effect();
	Effect(const WorldState name);
	~Effect();

	const WorldState GetName();
		
	void ProcessAction();
};