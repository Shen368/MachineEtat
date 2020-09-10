#include "Transition.h"

void Transition::checkHumanTiredness(Human& human)
{
    if (human.getTiredness() < TirednessAlert)
    {
        std::cout << "Human is tired." << std::endl;
        std::cout << "Tiredness: " << human.getTiredness() << std::endl;
        states.sleep(human);
    }
}