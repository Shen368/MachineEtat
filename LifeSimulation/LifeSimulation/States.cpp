#include "States.h"

using namespace std::this_thread;
using namespace std::chrono;

States::States() {}

void States::sleep(Human& human)
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