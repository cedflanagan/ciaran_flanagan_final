/*
 * Name        : activator.h
 * Author      : Ciaran Flanagan
 * Description : Class definition for Activator
 */
 
#include <string>
#include <sstream>

using std::string;
using std::stringstream;
 
class Activator
{
    public:
        // return a prime number in the series of primes, --
        // first prime is 2, second prime is 3, etc. --
        unsigned int getPrime (unsigned int whichPrime);
        
        // return the sum of the digits in a value --
        // reduced to a single digit --
        // ex: sum of digits in 99 is 9+9=18, 1+8=9, return 9 --
        unsigned int sumTheDigits (unsigned int value);
};