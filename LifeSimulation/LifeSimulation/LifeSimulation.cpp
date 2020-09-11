#include <iostream>
#include <chrono>
#include <thread>

#include "Human.h"
#include "StateMachine.h"
#include "Transition.h"
#include "States.h"


int main()
{
    //My human Simulation
    Human* jack = new Human(true, false, false, false, false,false);

    //All my state
    States* Alive = new States("Morning evereyone");
    States* Hungry = new States("I'm Hungry");
    States* Food = new States("Sorry Eating food now come later");
    States* Sport = new States("Doing some Practice");
    States* Tired = new States("Oh I really need some rest");
    States* Sleep = new States("Sleeping zzzzzz");


    //All Condition for transition to another state
    Transition  transGetFood([&jack]() {
        cout << "GettingFood" << endl;
        if (jack->m_alive && jack->m_hunger && !jack->m_Sleep) {
            jack->m_hunger = false;
            return true;
        }
        return false;
        });

    Transition  transEat([&jack]() {
        std::cout << "Lets go eat" << endl;
        if (jack->m_alive && jack->m_food) {
            jack->m_food = false;
            jack->m_sport = true;
            return true;
            }
        return false;
        });
    /*
    Transition  transDeath([&jack]() {
        std::cout << "dead" << endl;
        if (jack->m_alive && !jack->m_food) {
            jack->m_alive = false;
            return true;
        }
        return false;
        });
    */
    Transition  transSport([&jack]() {
        std::cout << "go to Gym" << endl;
        if (jack->m_alive && jack->m_sport) {
            jack->m_sport = false;
            jack->m_tiredness = true;
        }
        return false;
        });

    Transition  transTiredness([&jack]() {
        std::cout << "Get Tired" << endl;
        if (jack->m_alive && jack->m_tiredness) {
            jack->m_Sleep = true;
            return true;
        }
        return false;
        });

    Transition  transRest([&jack]() {
        std::cout << "go to bed" << endl;
        if (jack->m_alive && jack->m_tiredness) {
            jack->m_tiredness = false;
            jack->m_Sleep = true;
        }
        return false;
        });

    Transition  transAwake([&jack]() {
        std::cout << "Wakeup still Alive" << endl;
        if (jack->m_alive) {
            return true;
        }
        return false;
        });


    Alive->AddTransition(transGetFood);
    Alive->AddTransition(transEat);
    Alive->AddTransition(transSport);
    Alive->AddTransition(transTiredness);
    Alive->AddTransition(transRest);
    //Alive->AddTransition(transDeath);
    
    //Test diffenrent state
    Alive->AddToCantAccesList(Hungry);
    Alive->AddToCantAccesList(Sport);
    Alive->AddToCantAccesList(Tired);

    
    Hungry->AddTransition(transEat);
    Hungry->AddToCantAccesList(Food);

    Food->AddTransition(transSport);
    //Food->AddTransition(transDeath);
    Food->AddToCantAccesList(Sport);


    Sport->AddTransition(transTiredness);
    Sport->AddToCantAccesList(Tired);

    Tired->AddTransition(transRest);
    Tired->AddToCantAccesList(Sleep);

    Sleep->AddTransition(transAwake);
    Sleep->AddToCantAccesList(Alive);



    StateMachine stateMachine(Alive, jack);
    //stateMachine.AddStates(Sport);
    stateMachine.ProcessState();


    //Destructeur
    delete Alive;
    delete Hungry;
    delete Food;
    delete Sport;
    delete Tired;
    delete Sleep;




    return 0;
}

