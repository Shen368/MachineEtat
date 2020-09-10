#include "States.h"

using namespace std::this_thread;
using namespace std::chrono;

States::States() {}

void States::sleep(Human& human)
{
    sleep_for(2s);
    human.addTiredness(2);
    std::cout << "Tiredness: " << human.getTiredness() << std::endl;
}