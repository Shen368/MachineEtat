#pragma once
#include <iostream>

#include "Action.h"

class Precondition
{
	WorldState m_name;

public :
	Precondition();
	Precondition(WorldState name);
	~Precondition();

	WorldState GetName();

	bool Process();
};