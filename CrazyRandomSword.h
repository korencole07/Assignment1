
#include <string>
#include "Weapon.h"
#include <ctime>
#include <cstdlib>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a crazy sword (hitpoint = random between 7 and 100, ignores random amount of armor
 * ranging from 2 to 1/3 of the armor the weapon hits 
 */
class CrazyRandomSword: public Weapon {
public:


    CrazyRandomSword() : Weapon("Crazy random sword", getHit()) { //Calls Weapon(name, hitpoints) constructor for crazy sword and hit points to be determined in cpp
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

	double getHit();
};

#endif
