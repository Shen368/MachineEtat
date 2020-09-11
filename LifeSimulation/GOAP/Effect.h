#pragma once
#include <iostream>

#include "GameManager.h"

class Effect
{
private:
	std::string m_name;
	void(*addRessource)(GameManager* gameManager);

public:
	Effect();
	Effect(std::string name, void(*ressource)(GameManager* gameManager));
	~Effect();
		
	void ProcessAction(GameManager* gameManager);
};