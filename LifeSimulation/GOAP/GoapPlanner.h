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

	std::vector<Action*> GetAllActions();
	Action* GetGoalAction();

	//std::vector<Action*> displayAllActions();
	friend std::ostream& operator<< (std::ostream&, const GoapPlanner&);

	Action* CreateGoalAction();
	std::vector<Action*> CreateAllActions();

	void CreatePlanner();
	void Solve();
};