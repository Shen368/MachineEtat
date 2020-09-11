#pragma once
#include <iostream>

#include "GameManager.h"
#include "Action.h"

class Precondition
{
	WorldState m_name;
	bool(*m_condition)(GameManager*);

public :
	Precondition();
	Precondition(WorldState name, bool(*condition)(GameManager*));
	~Precondition();

	bool Process(GameManager* gameManager);
};