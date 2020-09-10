#pragma once
#include "Action.h"

class GoapPlanner
{
private:
	std::vector<Action*> allActions;
	Action* goalAction;

public:
	GoapPlanner();
	GoapPlanner(Action* goal);
	~GoapPlanner();

	void CreateSolver();
	void Solve();
};