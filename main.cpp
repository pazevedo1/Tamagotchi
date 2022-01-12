
#include <iostream>
#include "Stats.h"

int main()
{
	Stats firstPet;
	firstPet.inc_Hunger(-51);
	firstPet.inc_Happiness(-60);
	firstPet.inc_Health(-70);
	std::cout << "Hello I am Garfield, i am at hunger " << firstPet.currentHunger << ", with health " << firstPet.currentHealth << " and happiness " << firstPet.currentHappiness << std::endl;
	std::cout << "My energy is..." << firstPet.currentEnergy << std::endl;
	//firstPet.call_Hunger(firstPet.get_Hunger());
	//firstPet.call_Happiness(firstPet.get_Happiness());
	//firstPet.call_Health(firstPet.get_Health());
	firstPet.inc_Hunger(5);
	firstPet.inc_Happiness(12);
	firstPet.inc_Health(-7);
	std::cout << "Hello I am Garfield, i am at hunger " << firstPet.currentHunger << ", with health " << firstPet.currentHealth << " and happiness " << firstPet.currentHappiness << std::endl;
	//firstPet.call_Hunger(firstPet.get_Hunger());
	//firstPet.call_Happiness(firstPet.get_Happiness());
	//firstPet.call_Health(firstPet.get_Health());
	return 0;
}
