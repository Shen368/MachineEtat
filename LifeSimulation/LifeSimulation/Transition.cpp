#include "Transition.h"

Transition::Transition() {
}

void Transition::checkHumanHunger(Human& human)
{
    if (human.getHunger() < 10)
    {
        std::cout << "Human is hunger." << std::endl;
        std::cout << "Hunger: " << human.getHunger() << std::endl;
    }
}



























//void Transition::checkHumanTiredness(Human& human) {
//    if (human.getTiredness() < TirednessAlert)
//    {
//        std::cout << "Human is tired." << std::endl;
//        std::cout << "Tiredness: " << human.getTiredness() << std::endl;
//        std::cout << "Human need to sleep." << std::endl;
//        std::cout << "Enter in sleep state." << std::endl;
//        while (humanIsTired(human))
//        {
//            states.sleep(human);
//        }
//    }
//}
//
//bool Transition::humanIsTired(Human& human) {
//    if (human.getTiredness() < TirednessLimit)
//    {
//        return true;
//    }
//    else
//    {
//        std::cout << "Human isn't tired anymore." << std::endl;
//        std::cout << "Exit sleep state." << std::endl;
//        return false;
//    }
//}
