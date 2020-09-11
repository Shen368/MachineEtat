#include <iostream>
#include <chrono>
#include <thread>
#include <vector>

#include "Action.h"
#include "GoapPlanner.h"

//void Goap() {
//    std::vector<Action*> actions;
//    Action* tempAction;
//
//    // Target
//    Action* MangerPomme = new Action("Manger une pomme");
//    MangerPomme->AddEffect("Effet faim +1");
//    MangerPomme->AddPrecondition("Avoir une pomme disponible");
//
//    // Branch 1
//    Action* PrendrePomme = new Action("Prendre une pomme", 0);
//    PrendrePomme->AddEffect("Avoir une pomme disponible");
//    MangerPomme->AddPrecondition("Avoir une pomme dans sa cuisine");
//    actions.push_back(PrendrePomme);
//
//    Action* PommeCuisine = new Action("Recuperer une pomme dans sa cuisine", 0);
//    PommeCuisine->AddEffect("Avoir une pomme dans sa cuisine");
//    actions.push_back(PommeCuisine);
//
//    // Branch 2
//    Action* AcheterPomme = new Action("Acheter une pomme", 5);
//    AcheterPomme->AddEffect("Avoir une pomme disponible");
//    AcheterPomme->AddPrecondition("Avoir de l argent");
//    actions.push_back(AcheterPomme);
//
//    Action* RecupererArgent = new Action("Recuperer de l argent", 10);
//    RecupererArgent->AddEffect("Avoir de l argent");
//    actions.push_back(RecupererArgent);
//
//    for (Action* act : actions) {
//        if (MangerPomme->GetPreconditions() == act->GetEffect())
//        {
//            if (act->GetCost() < tempAction->GetCost())
//            {
//                tempAction = act;
//            }
//        }
//    }
//}

// Pour réaliser l'action
// Vérifier la précondition
// Si précondition rempli, réaliser l'action
// Sinon pour chaque action ayant cette effet
// Vérifier leur précondition et leur cout
// Prendre l'action avec le plus faible cout

bool CheckIfActionHavePreconditions(std::vector<std::string>& goalPreconditions, std::vector<std::string>& childPreconditions)
{
    bool find = true;

    for (int GP = 0; GP < goalPreconditions.size(); ++GP)
    {
        if (find == true)
        {
            for (int CP = 0; CP < childPreconditions.size(); ++CP)
            {
                if (goalPreconditions[GP] == childPreconditions[CP])
                {
                    find = true;
                    break;
                }
                find = false;
            }
        }
        else
        {
            return false;
        }    
    }

    return true;
}

int main() {
    GoapPlanner goapPlanner;

    // Action à réaliser
    Action* goalAction = goapPlanner.CreateGoalAction();
    int N = goalAction->GetPreconditions().size();
    std::vector<std::string> goalPreconditions;
    std::cout << "Action a realise : " << goalAction->GetName() << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "Precondition a realise : " << goalAction->GetPreconditions().at(i) << std::endl;
        // Ajout de toutes les preconditions de l'action
        goalPreconditions.push_back(goalAction->GetPreconditions().at(i));
    }

    // Liste des actions disponibles
    std::vector<Action*> allActions = goapPlanner.CreateAllActions();
    std::cout << std::endl << "----- Liste des actions disponibles -----" << std::endl;
    std::cout << goapPlanner << std::endl;

    // Trouver le chemin pour réaliser notre action
    Action* cheapAction = goalAction;
    Action* expensiveAction = goalAction;
    std::vector<std::string> childPreconditions;
    std::vector<std::string> otherPreconditions;

    // Pour chaque actions disponible
    int PC = 0;
    int PO = 0;
    for (Action* act : allActions) {
        // Vérifier si l'action rempli toutes nos préconditions
        PC = act->GetPreconditions().size();
        for (int k = 0; k < PC; ++k) {
            // Ajout de toutes les preconditions de l'action
            childPreconditions.push_back(act->GetPreconditions().at(k));
        }
        // Vérifier si l'action a nos préconditions comme effet
        if (CheckIfActionHavePreconditions(goalPreconditions, childPreconditions))
        {
            // Vérifier si l'action a des preconditions
            if (act->GetPreconditions().size() != 0)
            {
                otherPreconditions.clear();
                PO = act->GetPreconditions().size();
                for (int k = 0; k < PO; ++k) {
                    // Ajout de toutes les preconditions de l'action
                    otherPreconditions.push_back(act->GetPreconditions().at(k));
                }
                // Vérifier si l'action a nos préconditions comme effet
                if (CheckIfActionHavePreconditions(childPreconditions, otherPreconditions)) {
                    // Vérifier si l'action est la moins couteuse
                    if (act->GetCost() <= cheapAction->GetCost())
                    {
                        cheapAction = act;
                    }
                    else if (act->GetCost() >= expensiveAction->GetCost())
                    {
                        expensiveAction = act;
                    }
                }
            }
            else
            {
                // Vérifier si l'action est la moins couteuse
                if (act->GetCost() <= cheapAction->GetCost())
                {
                    cheapAction = act;
                }
                else if(act->GetCost() >= expensiveAction->GetCost())
                {
                    expensiveAction = act;
                }
            }
        }
    }

    std::cout << "Action la moins couteuse : " << cheapAction->GetName() << std::endl;
    std::cout << "Action la plus couteuse : " << expensiveAction->GetName() << std::endl;

    // Pour chaque actions disponible
    //for (Action* act : allActions) {
    //    for (int i = 0; i < N; ++i) {
    //        goalPreconditions.push_back(goalAction->GetPreconditions().at(i));

    //        // Vérifier si l'action a notre précondition comme effet
    //        if (goalPreconditions[i] == act->GetEffect())
    //        {
    //            // Vérifier si l'action est la moins couteuse
    //            if (act->GetCost() <= cheapAction->GetCost())
    //            {
    //                // Vérifier si l'action a des préconditions
    //                if (act->GetPreconditions().size() == 0)
    //                {
    //                    cheapAction = act;
    //                }
    //                else
    //                {
    //                    int PS = act->GetPreconditions().size();
    //                    for (int k = 0; k < PS; ++k) {
    //                        childPreconditions.push_back(act->GetPreconditions().at(k));

    //                        if (childPreconditions[i] == act->GetEffect())
    //                        {
    //                            if (act->GetCost() <= cheapAction->GetCost())
    //                            {
    //                                cheapAction = act;
    //                            }
    //                            else
    //                            {
    //                                expensiveAction = act;
    //                            }
    //                        }
    //                    }
    //                }
    //            }
    //            else
    //            {
    //                expensiveAction = act;
    //            }
    //        }
    //    }
    //}

    /*std::cout << "Action la moins couteuse : " << cheapAction->GetName() << std::endl;
    std::cout << "Action la plus couteuse : " << expensiveAction->GetName() << std::endl;*/

    return 0;
}