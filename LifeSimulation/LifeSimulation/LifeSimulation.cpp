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

int TirednessAlert = 14;
int TirednessMax = 20;

void sleep(Human& human)
{
    std::cout << "Enter in sleep state." << std::endl;
    std::cout << "Human need to sleep." << std::endl;
    while (human.getTiredness() < TirednessMax)
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

int main()
{
    // Init human
    Human human;
    std::cout << "Human creation" << std::endl << human;

    // Check human tiredness
    checkHumanTiredness(human);

    return 0;
}