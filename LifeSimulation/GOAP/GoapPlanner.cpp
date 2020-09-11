#include "GoapPlanner.h"

GoapPlanner::GoapPlanner() {
	goalAction = nullptr;
}

GoapPlanner::GoapPlanner(Action* goal) {
	goalAction = goal;
}

GoapPlanner::~GoapPlanner() {
	int N = allActions.size();

	for (int i = 0; i < N; ++i)
	{
		delete allActions[i];
	}

	delete goalAction;
}

std::vector<Action*> GoapPlanner::GetAllActions() {
	return allActions;
}

Action* GoapPlanner::GetGoalAction() {
	return goalAction;
}

//std::ostream& operator<< (std::ostream& os, const GoapPlanner& gp) {
//	int N = gp.allActions.size();
//
//	for (int i = 0; i < N; ++i)
//	{
//		os << "Nom : " << gp.allActions[i]->GetName() << std::endl;
//		os << "Cout : " << gp.allActions[i]->GetCost() << std::endl;
//		int P = gp.allActions[i]->GetPreconditions().size();
//		for (int j = 0; j < P; ++j) {
//			os << "Precondition : " << gp.allActions[i]->GetPreconditions().at(j) << std::endl;
//		}
//		os << "Effet : " << gp.allActions[i]->GetEffect() << std::endl;
//		os << "------------------------------" << std::endl;
//	}
//	return os;
//}

Action* GoapPlanner::CreateGoalAction() {
	Action* FabriquerEpee = new Action("Fabriquer une epee");
	FabriquerEpee->AddPrecondition(WorldState::FORGERON);
	FabriquerEpee->AddPrecondition(WorldState::FER);
	FabriquerEpee->AddEffect(WorldState::EPEE);

	goalAction = FabriquerEpee;
	return goalAction;
}

std::vector<Action*> GoapPlanner::CreateAllActions() {
	allActions.reserve(2);

	Action* Miner = new Action("Miner");
	Miner->AddPrecondition(WorldState::FORGERON);
	Miner->AddPrecondition(WorldState::PIOCHE);
	Miner->AddEffect(WorldState::FER);

	Action* Forgeron = new Action("Avoir un forgeron");
	Forgeron->AddPrecondition(WorldState::ARGENT);
	Forgeron->AddEffect(WorldState::FORGERON);

	allActions.push_back(Miner);
	allActions.push_back(Forgeron);

	return allActions;
}

void GoapPlanner::Solver() {
	int preconditionNumber = goalAction->GetPreconditions().size();
	std::vector<Action*> path;
	std::vector<Action*> bestPath;
	int pathCost = 0;
	int bestCost = 99;

	for (int i = 0; i < preconditionNumber; ++i)
	{
		path.clear();
		bestPath.clear();
		pathCost = 0;
		bestCost = 99;

		std::vector<Action*> actions = GetActionsToMakeOurGoal(goalAction->GetPreconditions()[i]);
		for (int j = 0; j < actions.size(); ++j)
		{

		}
	}
}

std::vector<Action*> GoapPlanner::GetActionsToMakeOurGoal(WorldState precondition) {
	std::vector<Action*> actions;

	for (int i = 0; i < allActions.size(); ++i)
	{
		for (int j = 0; j < allActions[i]->GetEffect().size(); ++j)
		{
			if (precondition->GetName() == allActions[i]->GetEffect()[j]->GetName())
			{
				actions.push_back(allActions[i]);
			}
		}
	}

	return actions;
}