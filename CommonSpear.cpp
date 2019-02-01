/* 
 * File:   CommonSword.h
 * Author: Javier <jrescobara@gmail.com>
 * 
 * Created on September 25, 2017, 3:31 PM
 */

#include "CommonSpear.h"

double CommonSpear::hit(double armor) {
    double damage = hitPoints - (armor * 0.8);
    if (damage < 0) {
        return 0;
    }
    return damage;
}
