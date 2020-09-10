#include <iostream>
#include <chrono>
#include <thread>
#include "Human.h"

// sleep_for, sleep_until
using namespace std::this_thread;
// nanoseconds, system_clock, seconds
using namespace std::chrono;

//int hours, minute;
//int ReserveEau;
//int foodQte;

int Tiredness = 20;

void humanIsTired(Human& human)
{
    if (human.getTiredness() < Tiredness)
    {
        std::cout << "Enter in sleep state." << std::endl;
        std::cout << "Tiredness: " << human.getTiredness() << std::endl;
        std::cout << "Human need to sleep." << std::endl;
        while (human.getTiredness() < Tiredness)
        {
            sleep_for(2s);
            human.addTiredness(2);
            std::cout << "Tiredness: " << human.getTiredness() << std::endl;
        }
        std::cout << "Human isn't tired anymore." << std::endl;
        std::cout << "Moving to an other state." << std::endl;
    }
}

int main()
{
    // Init human
    Human human;
    std::cout << "Human creation" << std::endl << human;

    // Check if human is tired
    humanIsTired(human);

    return 0;
}