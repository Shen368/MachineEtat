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

int main()
{
    // Init human
    Human human;
    std::cout << "Human creation" << std::endl << human;

    // If human is tired
    if (human.getTiredness() < Tiredness)
    {
        std::cout << "Tiredness: " << human.getTiredness() << std::endl;
        // Sleep
        std::cout << "Human need to sleep." << std::endl;
        while (human.getTiredness() < Tiredness)
        {
            sleep_for(2s);
            human.addTiredness(2);
            std::cout << "Tiredness: " << human.getTiredness() << std::endl;
        }
        std::cout << "Human isn't tired anymore." << std::endl;
    }

    return 0;
}