/* 
 * File:   CommonArrow.h
 * Author: Koren Cole  <korencole07@gmail.com>
 * 
*/

#include <string>
#include "Weapon.h"

#ifndef COMMONARROW_H
#define COMMONARROW_H

/**
 * Defines the behavior of a common arrow (hitpoint = 15, 7 arrows thrown, only a certain amount hit
 * ignores 40% of armor points if hit)
 */
class CommonArrow : public Weapon {
public:

    CommonArrow() : Weapon("Common arrow", 15.0 * numHits()) { //Calls Weapon(name, hitpoints) constructor with values Common arrow and 10.0 * how many arrows hit the target
    }

    virtual ~CommonArrow() {};

    virtual double hit(double armor);

	int numHits();
};

#endif

