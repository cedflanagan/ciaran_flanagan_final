/*
 * Name        : specialrocketship.h
 * Author      : Ciaran Flanagan
 * Description : Class definition for SpecialRocketShip
 */
 
#ifndef SPECIALROCKETSHIP_H
#define SPECIALROCKETSHIP_H

#include "rocketship.h"

class SpecialRocketShip : public RocketShip
{
    private:
        bool cloaked;
        
    public:
        SpecialRocketShip();
        
        void setCloaked(bool is_cloaked);
        
        bool getCloaked() const;
        
};

#endif //SPECIALROCKETSHIP_H