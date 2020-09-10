#include <iostream>
#include <chrono>
#include <thread>
#include <vector>

#include "Human.h"
#include "Action.h"

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

int main() {
    //Goap();

    return 0;
}