#pragma once
#include <iostream>

#include "GameManager.h"
#include "Action.h"

class Effect
{
private:
	WorldState m_name;
	void(*addRessource)(GameManager* gameManager);

public:
	Effect();
	Effect(WorldState name, void(*ressource)(GameManager* gameManager));
	~Effect();
		
	void ProcessAction(GameManager* gameManager);
};