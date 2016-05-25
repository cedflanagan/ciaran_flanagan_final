/*
 * Name        : activator.h
 * Author      : Ciaran Flanagan
 * Description : Class definition for Activator
 */
 
#include "activator.h"

// return a prime number in the series of primes, --
// first prime is 2, second prime is 3, etc. --
unsigned int Activator::getPrime (unsigned int whichPrime)
{
    unsigned int current_prime = 2;
    unsigned int count = 1;
    
    while(count != whichPrime)
    {
        current_prime ++;
        
        for(unsigned int i = 2; i < current_prime; i++)
        {
            if(current_prime % i == 0 )
            {
                break;
            }
            
            else
            {
                count ++;
                break;
            }
        }
    }
    
    return current_prime;
}

// return the sum of the digits in a value --
// reduced to a single digit --
// ex: sum of digits in 99 is 9+9=18, 1+8=9, return 9 --
unsigned int Activator::sumTheDigits (unsigned int value)
{
    unsigned int total = 0;
    stringstream ss;
    
    ss << value;
    
    while(ss)
    {
        total += ss.get();
    }
    
    return total;
}