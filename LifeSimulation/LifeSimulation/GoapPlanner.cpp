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

void GoapPlanner::CreateSolver() {
	allActions.reserve(3);

	Action* MangerPomme = new Action("Manger une pomme");
	Action* MangerNugget = new Action("Manger des nuggets");
	Action* BoireSoda = new Action("Boire un soda");
	Action* AcheterLivre = new Action("Acheter un livre");
}

void GoapPlanner::Solve() {}