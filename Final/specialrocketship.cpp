/*
 * Name        : specialrocketship.h
 * Author      : Ciaran Flanagan
 * Description : Class definition for SpecialRocketShip
 */

#include "specialrocketship.h"

SpecialRocketShip::SpecialRocketShip()
    :RocketShip("RS Cloaky", 1000),
     cloaked(false)
     {}
        
void SpecialRocketShip::setCloaked(bool is_cloaked)
{
    cloaked = is_cloaked;
}

bool SpecialRocketShip::getCloaked() const
{
    return cloaked;
}