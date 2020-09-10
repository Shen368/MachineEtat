#include <iostream>
#include <chrono>
#include <thread>

#include "Human.h"
#include "StateMachine.h"
#include "Transition.h"
#include "States.h"

/*
void CreateStateMachine() {

	States* start = new States();
	States* end = new States();
	Transition* transition = new Transition();
	start->AddTransition(transition, end);
}
*/

int main()
{
	Human* jack = new Human(true, true, false, false);

	States* Hungry = new States("I'm Hungry");
	States* Thirsty = new States("I'm Thirsty");
	States* Eat = new States("Sorry Eating food now come later");
	
	

	Transition  transHungry([&jack]() {
		cout << "GettingFood" << endl;
		if (jack->m_hunger ? true : false);
		});

	Transition transGetFood([&jack]() {
		cout << "Going get some fooddd" << endl;
	

		});

		return 0;
}





















//using namespace std::this_thread;
//using namespace std::chrono;
//
//int TirednessAlert = 12;
//int TirednessLimit = 20;
//
//void sleep(Human& human)
//{
//    std::cout << "Enter in sleep state." << std::endl;
//    std::cout << "Human need to sleep." << std::endl;
//    while (human.getTiredness() < TirednessLimit)
//    {
//        sleep_for(2s);
//        human.addTiredness(2);
//        std::cout << "Tiredness: " << human.getTiredness() << std::endl;
//    }
//    std::cout << "Human isn't tired anymore." << std::endl;
//    std::cout << "Exit sleep state." << std::endl;
//}
//
//void checkHumanTiredness(Human& human)
//{
//    if (human.getTiredness() < TirednessAlert)
//    {
//        std::cout << "Human is tired." << std::endl;
//        std::cout << "Tiredness: " << human.getTiredness() << std::endl;
//        sleep(human);
//    }
//}
//
//void checkHumanHunger(Human& human)
//{
//    if (human.getHunger() < 10)
//    {
//        std::cout << "Human is hunger." << std::endl;
//        std::cout << "Hunger: " << human.getHunger() << std::endl;
//    }
//}
//
//void checkHumanThirsty(Human& human)
//{
//    if (human.getThirsty() < 10)
//    {
//        std::cout << "Human is thirsty." << std::endl;
//        std::cout << "Thirsty: " << human.getThirsty() << std::endl;
//    }
//}
//
//void checkHumanTemperature(Human& human)
//{
//    if (human.getTemperature() < 10)
//    {
//        std::cout << "Human is cold." << std::endl;
//        std::cout << "Temperature: " << human.getTemperature() << std::endl;
//    }
//    else if (human.getTemperature() > 20)
//    {
//        std::cout << "Human is hot." << std::endl;
//        std::cout << "Temperature: " << human.getTemperature() << std::endl;
//    }
//}