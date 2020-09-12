#pragma once
#include <iostream>

#include "Action.h"
#include"GameState.h"

class Precondition
{
	WorldState m_name;

public :
	Precondition();
	Precondition(const WorldState name);
	~Precondition();

	const WorldState GetName();

	bool Process();
};