#pragma once
#include <iostream>

#include "Human.h"
#include "States.h"

class Transition
{
private:
	States states;
	int TirednessAlert = 12;
	int TirednessLimit = 20;

public:
	void checkHumanTiredness(Human& human);
	bool humanIsTired(Human& human);
};