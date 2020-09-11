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

//std::vector<Action*> GoapPlanner::displayAllActions() {
//	int N = allActions.size();
//
//	for (int i = 0; i < N; ++i)
//	{
//		std::cout << allActions[i];
//	}
//}

std::ostream& operator<< (std::ostream& os, const GoapPlanner& gp) {
	int N = gp.allActions.size();

	for (int i = 0; i < N; ++i)
	{
		os << "Nom : " << gp.allActions[i]->GetName() << std::endl;
		os << "Cout : " << gp.allActions[i]->GetCost() << std::endl;
		int P = gp.allActions[i]->GetPreconditions().size();
		for (int j = 0; j < P; ++j) {
			os << "Precondition : " << gp.allActions[i]->GetPreconditions().at(j) << std::endl;
		}
		os << "Effet : " << gp.allActions[i]->GetEffect() << std::endl;
		os << "------------------------------" << std::endl;
	}
	return os;
}

Action* GoapPlanner::CreateGoalAction() {
	Action* MangerPomme = new Action("Manger une pomme");
	MangerPomme->AddPrecondition("Avoir une pomme disponible");

	Action* MangerNugget = new Action("Manger des nuggets");
	Action* BoireSoda = new Action("Boire un soda");
	Action* AcheterLivre = new Action("Acheter un livre");

	goalAction = MangerPomme;
	return goalAction;
}

std::vector<Action*> GoapPlanner::CreateAllActions() {
	allActions.reserve(2);

	Action* PrendrePomme = new Action("Prendre une pomme");
	PrendrePomme->AddPrecondition("Avoir une pomme dans sa cuisine");
	PrendrePomme->AddEffect("Avoir une pomme disponible");

	Action* RecupererPomme = new Action("Recuperer une pomme dans sa cusine", 15);
	RecupererPomme->AddEffect("Avoir une pomme dans sa cuisine");

	Action* AcheterPomme = new Action("Acheter une pomme", 5);
	AcheterPomme->AddPrecondition("Avoir de l argent");
	AcheterPomme->AddEffect("Avoir une pomme disponible");

	Action* PrendreSoda = new Action("Prendre un soda");
	PrendreSoda->AddEffect("Avoir un soda disponible");

	Action* AcheterSoda = new Action("Acheter un soda", 10);
	AcheterSoda->AddPrecondition("Avoir de l argent");
	AcheterSoda->AddEffect("Avoir un soda disponible");

	/*Action* MangerNugget = new Action("Manger des nuggets");
	Action* BoireSoda = new Action("Boire un soda");
	Action* AcheterLivre = new Action("Acheter un livre");*/

	allActions.push_back(PrendrePomme);
	allActions.push_back(RecupererPomme);
	allActions.push_back(AcheterPomme);
	allActions.push_back(PrendreSoda);
	allActions.push_back(AcheterSoda);

	return allActions;
}

void GoapPlanner::CreatePlanner() {
	allActions.reserve(3);

	Action* MangerPomme = new Action("Manger une pomme");
	Action* MangerNugget = new Action("Manger des nuggets");
	Action* BoireSoda = new Action("Boire un soda");
	Action* AcheterLivre = new Action("Acheter un livre");

	allActions.push_back(MangerPomme);
	allActions.push_back(MangerNugget);
	allActions.push_back(BoireSoda);
	allActions.push_back(AcheterLivre);
}

void GoapPlanner::Solve() {}