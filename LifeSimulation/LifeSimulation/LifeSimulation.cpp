#include <iostream>
#include "Human.h"

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
    std::cout << "Tiredness: " << human.getTiredness() << std::endl;
    if (human.getTiredness() < Tiredness)
    {
        // Sleep
        std::cout << "Human need to sleep." << std::endl;
        while (human.getTiredness() < Tiredness)
        {
            human.addTiredness(2);
            std::cout << "Tiredness: " << human.getTiredness() << std::endl;
        }
        std::cout << "Human isn't tired anymore." << std::endl;
    }

    return 0;
}