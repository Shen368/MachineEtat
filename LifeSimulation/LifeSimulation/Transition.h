#pragma once
#include "States.h"


class Transition {

public:
	Transition();
	void AddTransition(Transition& transi, States& EndStat);

};