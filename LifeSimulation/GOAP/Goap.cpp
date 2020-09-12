#include <iostream>
#include <chrono>
#include <thread>
#include <vector>

#include "Action.h"
#include "GoapPlanner.h"
#include "GameState.h"

//bool CheckIfActionHavePreconditions(std::vector<std::string>& goalPreconditions, std::vector<std::string>& childPreconditions)
//{
//    bool find = true;
//
//    for (int GP = 0; GP < goalPreconditions.size(); ++GP)
//    {
//        if (find == true)
//        {
//            for (int CP = 0; CP < childPreconditions.size(); ++CP)
//            {
//                if (goalPreconditions[GP] == childPreconditions[CP])
//                {
//                    find = true;
//                    break;
//                }
//                find = false;
//            }
//        }
//        else
//        {
//            return false;
//        }    
//    }
//
//    return true;
//}

//int main() {
//    GoapPlanner goapPlanner;
//
//    // Action à réaliser
//    Action* goalAction = goapPlanner.CreateGoalAction();
//    int N = goalAction->GetPreconditions().size();
//    std::vector<std::string> goalPreconditions;
//    std::cout << "Action a realise : " << goalAction->GetName() << std::endl;
//    for (int i = 0; i < N; ++i) {
//        std::cout << "Precondition a realise : " << goalAction->GetPreconditions().at(i) << std::endl;
//        // Ajout de toutes les preconditions de l'action
//        goalPreconditions.push_back(goalAction->GetPreconditions().at(i));
//    }
//
//    // Liste des actions disponibles
//    std::vector<Action*> allActions = goapPlanner.CreateAllActions();
//    std::cout << std::endl << "----- Liste des actions disponibles -----" << std::endl;
//    std::cout << goapPlanner << std::endl;
//
//    // Trouver le chemin pour réaliser notre action
//    Action* cheapAction = goalAction;
//    Action* expensiveAction = goalAction;
//    std::vector<std::string> childPreconditions;
//    std::vector<std::string> otherPreconditions;
//
//    // Pour chaque actions disponible
//    int PC = 0;
//    int PO = 0;
//    for (Action* act : allActions) {
//        // Vérifier si l'action rempli toutes nos préconditions
//        PC = act->GetPreconditions().size();
//        for (int k = 0; k < PC; ++k) {
//            // Ajout de toutes les preconditions de l'action
//            childPreconditions.push_back(act->GetPreconditions().at(k));
//        }
//        // Vérifier si l'action a nos préconditions comme effet
//        if (CheckIfActionHavePreconditions(goalPreconditions, childPreconditions))
//        {
//            // Vérifier si l'action a des preconditions
//            if (act->GetPreconditions().size() != 0)
//            {
//                otherPreconditions.clear();
//                PO = act->GetPreconditions().size();
//                for (int k = 0; k < PO; ++k) {
//                    // Ajout de toutes les preconditions de l'action
//                    otherPreconditions.push_back(act->GetPreconditions().at(k));
//                }
//                // Vérifier si l'action a nos préconditions comme effet
//                if (CheckIfActionHavePreconditions(childPreconditions, otherPreconditions)) {
//                    // Vérifier si l'action est la moins couteuse
//                    if (act->GetCost() <= cheapAction->GetCost())
//                    {
//                        cheapAction = act;
//                    }
//                    else if (act->GetCost() >= expensiveAction->GetCost())
//                    {
//                        expensiveAction = act;
//                    }
//                }
//            }
//            else
//            {
//                // Vérifier si l'action est la moins couteuse
//                if (act->GetCost() <= cheapAction->GetCost())
//                {
//                    cheapAction = act;
//                }
//                else if(act->GetCost() >= expensiveAction->GetCost())
//                {
//                    expensiveAction = act;
//                }
//            }
//        }
//    }
//
//    std::cout << "Action la moins couteuse : " << cheapAction->GetName() << std::endl;
//    std::cout << "Action la plus couteuse : " << expensiveAction->GetName() << std::endl;
//
//    return 0;
//}

int main() {
	GoapPlanner goapPlaner;

	goapPlaner.CreatePlanner();

	// Tant que l'épée n'est pas fabriquer
	while (true)
	{
		// Start goap
		goapPlaner.Solver();

		std::this_thread::sleep_for(std::chrono::seconds(2));
	}

	return 0;
}