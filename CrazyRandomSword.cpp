/* 
 * File:   CrazyRandomSpear.cpp
 * Author: Koren Cole <korencole07@gmail.com>
 * 
 * Created on February 1, 2019
 */

#include "CrazyRandomSword.h"
#include <ctime>
#include <cstdlib>
#include <iostream> 
using namespace std;

double CrazyRandomSword::getHit()
{
	srand((unsigned)time(0));
	return hitPoints = (rand() % 100) +7;	// assigns a random amount of hit points to the sword
	
}

double CrazyRandomSword::hit(double armor) {
	srand((unsigned)time(0));
	int randArmor;
	int thirdArmor = armor * 2/3;	
	randArmor =(rand() % thirdArmor) + 2; //determine the amount of armor points ignored
	
	double damage = hitPoints - randArmor; 
	
	if (damage < 0) {
        return 0;
    }

    return damage;
}
