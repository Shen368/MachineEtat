#pragma once
#include "Action.h"

class GoapPlanner
{
private:
	std::vector<const Action*> allActions;
	const Action* goalAction;
	std::vector<std::vector<const Action*>> choosenPath;

public:
	GoapPlanner();
	GoapPlanner(const Action* goal);
	~GoapPlanner();

	std::vector<const Action*> GetAllActions();
	const Action* GetGoalAction();

	//friend std::ostream& operator<< (std::ostream&, const GoapPlanner&);

	void CreatePlanner();
	void CreateGoalAction();
	void CreateAllActions();

	void Solver();
	std::vector<Action*> GetActionsToMakeOurGoal(WorldState precondition);
};