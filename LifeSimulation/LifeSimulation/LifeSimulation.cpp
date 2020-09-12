#include <iostream>
#include <chrono>
#include <thread>

#include "Human.h"
#include "StateMachine.h"
#include "Transition.h"
#include "States.h"


int main()
{
    // Human Simulation
    Human* jack = new Human(true, true, false, false, false, false);

    // All my states
    States* Alive = new States("Morning everyone");
    States* Hungry = new States("I'm Hungry");
    States* Food = new States("Sorry Eating food now come later");
    States* Sport = new States("Doing some Practice");
    States* Tired = new States("Oh I really need some rest");
    States* Sleep = new States("Sleeping zzzzzz");


    // All Condition for transition to another state
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

/*---------------------------------------------------------------------------------------*/
    // Le AddTransition(trans...) sont la pour faire le controle defini juste au dessus
    // Le AddToCanAccesList est la pour avoir l'acces et passer au state suivant

    Alive->AddTransition(transGetFood);
    Alive->AddTransition(transEat);
    Alive->AddTransition(transSport);
    Alive->AddTransition(transTiredness);
    Alive->AddTransition(transRest);
    
    Alive->AddToCanAccesList(Hungry);
    Alive->AddToCanAccesList(Sport);
    Alive->AddToCanAccesList(Tired);

    
    Hungry->AddTransition(transEat);
    Hungry->AddToCanAccesList(Food);


    Food->AddTransition(transSport);
    Food->AddToCanAccesList(Sport);


    Sport->AddTransition(transTiredness);
    Sport->AddToCanAccesList(Tired);


    Tired->AddTransition(transRest);
    Tired->AddToCanAccesList(Sleep);


    Sleep->AddTransition(transAwake);
    Sleep->AddToCanAccesList(Alive);

/*---------------------------------------------------------------------------------------*/

    // Initialise state machine et activation;
    StateMachine stateMachine(Alive, jack);                 // Definie l'etat "Alive" pour commencer 
    stateMachine.ProcessState();                            // vous pouvez changer pour tester sur d'autre Etat Ex: "Sport"


    // Delete les new initialiser au debut pour ne pas avoir de fuite memoire
    delete Alive;
    delete Hungry;
    delete Food;
    delete Sport;
    delete Tired;
    delete Sleep;

    return 0;
}