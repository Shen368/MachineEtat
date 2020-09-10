#include <iostream>
#include <chrono>
#include <thread>

#include "Human.h"
#include "StateMachine.h"
#include "Transition.h"
#include "States.h"
#include "Action.h"

void CreateStateMachine() {

    States* start = new States();
    States* end = new States();
    Transition* transition = new Transition();
    start->AddTransition(transition, end);
}

void Goap() {
    std::vector<Action*> actions;
    Action* tempAction;

    // Target
    Action* MangerPomme = new Action("Manger une pomme");
    MangerPomme->AddEffect("Effet faim +1");
    MangerPomme->AddPrecondition("Avoir une pomme disponible");

    // Branch 1
    Action* PrendrePomme = new Action("Prendre une pomme", 0);
    PrendrePomme->AddEffect("Avoir une pomme disponible");
    MangerPomme->AddPrecondition("Avoir une pomme dans sa cuisine");
    actions.push_back(PrendrePomme);

    Action* PommeCuisine = new Action("Recuperer une pomme dans sa cuisine", 0);
    PommeCuisine->AddEffect("Avoir une pomme dans sa cuisine");
    actions.push_back(PommeCuisine);

    // Branch 2
    Action* AcheterPomme = new Action("Acheter une pomme", 5);
    AcheterPomme->AddEffect("Avoir une pomme disponible");
    AcheterPomme->AddPrecondition("Avoir de l argent");
    actions.push_back(AcheterPomme);

    Action* RecupererArgent = new Action("Recuperer de l argent", 10);
    RecupererArgent->AddEffect("Avoir de l argent");
    actions.push_back(RecupererArgent);

    for (Action* act : actions) {
        if (MangerPomme->GetPrecondition() == act->GetEffect())
        {
            if (act->GetCost() < tempAction->GetCost())
            {
                tempAction = act;
            }
        }
    }
}

int main()
{
    CreateStateMachine();

    Goap();

    return 0;
}





































/*
// sleep_for, sleep_until
using namespace std::this_thread;
// nanoseconds, system_clock, seconds
using namespace std::chrono;

//int hours, minute;
//int ReserveEau;
//int foodQte;

int TirednessAlert = 12;
int TirednessLimit = 20;

void sleep(Human& human)
{
    std::cout << "Enter in sleep state." << std::endl;
    std::cout << "Human need to sleep." << std::endl;
    while (human.getTiredness() < TirednessLimit)
    {
        sleep_for(2s);
        human.addTiredness(2);
        std::cout << "Tiredness: " << human.getTiredness() << std::endl;
    }
    std::cout << "Human isn't tired anymore." << std::endl;
    std::cout << "Exit sleep state." << std::endl;
}

void checkHumanTiredness(Human& human)
{
    if (human.getTiredness() < TirednessAlert)
    {
        std::cout << "Human is tired." << std::endl;
        std::cout << "Tiredness: " << human.getTiredness() << std::endl;
        sleep(human);
    }
}

void checkHumanHunger(Human& human)
{
    if (human.getHunger() < 10)
    {
        std::cout << "Human is hunger." << std::endl;
        std::cout << "Hunger: " << human.getHunger() << std::endl;
        sleep(human);
    }
}

void checkHumanThirsty(Human& human)
{
    if (human.getThirsty() < 10)
    {
        std::cout << "Human is thirsty." << std::endl;
        std::cout << "Thirsty: " << human.getThirsty() << std::endl;
        sleep(human);
    }
}

void checkHumanTemperature(Human& human)
{
    if (human.getTemperature() < 10)
    {
        std::cout << "Human is cold." << std::endl;
        std::cout << "Temperature: " << human.getTemperature() << std::endl;
        sleep(human);
    }
    else if (human.getTemperature() > 20)
    {
        std::cout << "Human is hot." << std::endl;
        std::cout << "Temperature: " << human.getTemperature() << std::endl;
        sleep(human);
    }
}
*/