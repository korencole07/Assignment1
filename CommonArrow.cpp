/* 
 * File:   CommonArrow.cpp
 * Author: Koren Cole <korencole07@gmail.com>
 * 
 * Created on February 1, 2019
 */

#include "CommonArrow.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int CommonArrow::numHits()
{
	int temp;		//temp hold of number of hits
	srand((unsigned)time(0));
	temp = rand() % 8;
	return temp; 
}
double CommonArrow::hit(double armor) {
    double damage = hitPoints - (armor* 0.6);
    if (damage < 0) {
        return 0;
    }
    return damage;
}
