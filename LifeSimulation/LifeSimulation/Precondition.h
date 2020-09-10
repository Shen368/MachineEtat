#pragma once
#include <iostream>

#include "GameManager.h"

class Precondition
{
	std::string m_name;
	bool(*m_condition)(GameManager*);

public :
	Precondition();
	Precondition(std::string name, bool(*condition)(GameManager*));
	~Precondition();

	bool Process(GameManager* gameManager);
};