#include <iostream>
#ifndef STATS_H_INCLUDED
#define STATS_H_INCLUDED
using namespace std;

class Stats
{
public:
	
	
	int maxHealth;
	int currentHealth;
	int maxHunger;
	int currentHunger;
	int maxHappiness;
	int currentHappiness;
	int maxEnergy;
	int currentEnergy;
	float currency;
	float growth;
	bool love;

	Stats()
	{	
		maxHealth = 100;
		maxHunger = 100;
		maxHappiness = 100;
		maxEnergy = 100;
		currentHealth = maxHealth;
		currentHunger = maxHunger;
		currentHappiness = maxHappiness;
		currentEnergy = maxEnergy;
		currency = 0.0;
		growth = 0.0;
		love = false;
		std::cout << "Hello I am Garfield, i am at hunger " << currentHunger << ", with health " << maxHealth << " and energy " << maxEnergy << std::endl; 
	}

	//Gets stats
	int get_Health()
	{
		return currentHealth;
	}

	int get_Hunger()
	{
		return currentHunger;
	}

	int get_Happiness()
	{
		return currentHappiness;
	}

	int get_Energy()
	{
		return currentEnergy;
	}

	float get_Currency()
	{
		return currency;
	}

	float get_Growth()
	{
		return growth;
	}

	bool get_Love()
	{
		return love;
	}
	
	//Increase stats
	void call_Hunger(int hunger);
	void call_Happiness(int happiness);
	void call_Health(int health);
	void inc_Health( int health )
	{
		if (health + currentHealth <= maxHealth && health + currentHealth >= 0) {
			currentHealth += health;
			call_Health(currentHealth);
		}
		else cout << "Health would fall out of health range" << endl;
	}

	void inc_Hunger( int hunger )
		{
		if (hunger + currentHunger <= maxHunger && hunger + currentHunger >= 0) {
			currentHunger += hunger;
			call_Hunger(currentHunger);
		}
		else cout << "Hunger would fall out of hunger range" << endl;
	}

	void inc_Happiness( int happiness )
	{
		if (happiness + currentHappiness <= maxHappiness && happiness + currentHappiness >= 0)
		{
			currentHappiness += happiness; 
			call_Happiness(currentHappiness);
		}
		else cout << "Happiness would fall out of happiness range" << endl;
	}

	void inc_Energy( int energy )
	{
		if (energy + currentEnergy <= maxEnergy && energy + currentEnergy >= 0)
			currentEnergy += energy;
		else cout << "Energy would fall out of energy range" << endl;
	}

	void inc_Currency( float cur)
	{
		if ( currency + cur >= 0)
			currency += cur;
		else cout << "Currency can't be below 0'" << endl;
	}

	void inc_Growth( float grow)
	{
		if ( grow >= 0 )
			growth += grow;
		else cout << "Growth can't become lower" << endl;
	}

	void inc_Love( bool Love)
	{
		love = Love;
	}
};
#endif
