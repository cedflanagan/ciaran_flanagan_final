/*
 * Name        : RocketShip.h
 * Author      : Ciaran Flanagan
 * Description : Class definition for RocketShip
 */


#ifndef ROCKETSHIP_H
#define ROCKETSHIP_H

#include <string>
#include <sstream>
#include <vector>

using std::string;
using std::stringstream;
using std::vector;

class RocketShip
{
    protected:
        string name;
        unsigned int fuel;
        
        // each element of the vector represents a fuel cell --
        // with a specific amount (unsigned int) of fuel --
        vector<unsigned int> fuelCells;
        
    public:
        RocketShip();
        
        RocketShip(string newName, unsigned int newFuel);
             
        void setName(string);
        
        void setFuel(unsigned int);
        
        string getName() const;
        
        unsigned int getFuel() const;
        
        // add a new element to fuelCells to contain fuelAmount --
        void addFuelCell(unsigned int fuelAmount);
        
        // removes the specified cell (0-indexed) from fuelCells --
        bool removeFuelCell(unsigned int cellNumber);
        
        // add fuelAmount to the specified fuelCell (0-indexed) --
        bool addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount);
        
        // zero out/burn all of the fuel in the specified cell (0-indexed) --
        // returns a string of asterisks representing the fuel in the cell --
        string burnFuel(unsigned int cellNumber);
};

#endif //ROCKETSHIP_H