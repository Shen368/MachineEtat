#include "States.h"

States::States() {

}

void States::AddTransition(Transition* transi, States* EndStat) {


}



void States::Process(unsigned int quandtity) {
	cout << "Doing Nothing" << endl;

}

void Manger::Process(unsigned int quandtity) {
	
	cout << "Eating food" << endl;
}































//using namespace std::this_thread;
//using namespace std::chrono;
//
//States::States() {}
//
//void States::sleep(Human& human)
//{
//	sleep_for(2s);
//	human.addTiredness(2);
//	std::cout << "Tiredness: " << human.getTiredness() << std::endl;
//}
