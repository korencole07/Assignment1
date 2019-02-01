/* 
 * File:   SimpleHammer.h
 * Author: Koren Cole <korencole07@gmail.com>
 * 
 * Created on February 1, 2019
 */

#include "SimpleHammer.h"
#include <iostream> 
using namespace std;

double SimpleHammer::hit(double armor) {
	double damage; 
	if(armor < 30)
		damage = hitPoints;
 	else
		damage = hitPoints - armor;
    if (damage < 0) {
        return 0;
    }
    return damage;
}
