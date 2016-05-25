/*
 * Name        : RocketShip.cpp
 * Author      : Ciaran Flanagan
 * Description : Functions for RocketShip
 */
 
#include "rocketship.h"
 
RocketShip::RocketShip()
    :name("RS NullPointer"),
     fuel(1000)
     {}
     
RocketShip::RocketShip(string newName, unsigned int newFuel)
    :name(newName),
     fuel(newFuel)
     {}
     
void RocketShip::setName(string the_name)
{
    name = the_name;
}

void RocketShip::setFuel(unsigned int the_fuel)
{
    fuel = the_fuel;
}

string RocketShip::getName() const
{
    return name;
}

unsigned int RocketShip::getFuel() const
{
    return fuel;
}

// add a new element to fuelCells to contain fuelAmount --
void RocketShip::addFuelCell(unsigned int fuelAmount)
{
    fuelCells.push_back(fuelAmount);
}

// removes the specified cell (0-indexed) from fuelCells --
bool RocketShip::removeFuelCell(unsigned int cellNumber)
{
    if(cellNumber < fuelCells.size())
    {
        fuelCells.erase(fuelCells.begin() + cellNumber);
        
        return true;
    }
    
    return false;
}

// add fuelAmount to the specified fuelCell (0-indexed) --
bool RocketShip::addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount)
{
    if(cellNumber < fuelCells.size())
    {
        fuelCells[cellNumber] += fuelAmount;
        
        return true;
    }
    
    return false;
        
}

// zero out/burn all of the fuel in the specified cell (0-indexed) --
// returns a string of asterisks representing the fuel in the cell --
string RocketShip::burnFuel(unsigned int cellNumber)
{
    stringstream ss;
    
    for(unsigned int i = 0; i < fuelCells[cellNumber]; i++)
    {
        ss << "*";
    }
    
    fuelCells[cellNumber] = 0;
    
    return ss.str();
}
