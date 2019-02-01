/* 
 * File:   SimpleHammer.h
 * Author: Koren Cole <korencole07@gmail.com>
 * 
 * Created on February 1, 2019
 */
#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple spear (hitpoint = 25, if armor is less than 30, ignore armor) 
 */
class SimpleHammer: public Weapon {
public:

    SimpleHammer() : Weapon("Simple hammer", 25.0) { //Calls Weapon(name, hitpoints) constructor for hammer and 25 hit points
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif
