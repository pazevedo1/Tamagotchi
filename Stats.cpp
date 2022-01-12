#include "Stats.h"
#include <iostream>

void Stats::call_Hunger(int hunger){
	if (hunger >= 50 && hunger <= 75)
	{ 
		std::cout << "I am okay with hunger" << std::endl;
	}
	else if (hunger < 50 ){
		std::cout << "I am starvin bro" << std::endl;
	}
	else if (hunger > 75) {
		std::cout << "Dude i'm getting fat" << std::endl;
	}
	else{
		std::cout << "Idk bro" << std::endl;
	}
}


void Stats::call_Health(int health) {
	if (health >= 50 && health <= 75)
	{
		std::cout << "I'm a healthy boy" << std::endl;
	}
	else if (health < 50) {
		std::cout << "I could use some healing" << std::endl;
	}
	else if (health > 75) {
		std::cout << "I'm the healthiest boy around" << std::endl;
	}
	else {
		std::cout << "Idk bro" << std::endl;
	}
}
void Stats::call_Happiness(int happiness) {
	if (happiness >= 50 && happiness <= 75)
	{
		std::cout << "I guess im happy" << std::endl;
	}
	else if (happiness < 50) {
		Stats::inc_Energy(-10);
		std::cout << "I am depressed, im losing energy..."<< Stats::get_Energy() << std::endl;
		
	}
	else if (happiness > 75) {
		std::cout << "Life is sunshine and rainbows" << std::endl;
	}
	else {
		std::cout << "Idk bro" << std::endl;
	}
}
