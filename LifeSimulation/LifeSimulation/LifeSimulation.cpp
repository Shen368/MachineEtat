#include <iostream>
#include "Human.h"

//int hours, minute;
//int ReserveEau;
//int foodQte;

int main()
{
    // Init human
    Human human;
    std::cout << human;

    int life = human.getLife();
    std::cout << life;

    return 0;
}