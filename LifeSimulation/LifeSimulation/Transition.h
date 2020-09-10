#pragma once
#include <iostream>

#include "Human.h"
#include "States.h"

class Transition
{
private:
	States states;
	int TirednessAlert = 12;

public:
	void checkHumanTiredness(Human& human);
};