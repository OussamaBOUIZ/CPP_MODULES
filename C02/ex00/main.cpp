#include <iostream>
#include "Fixed.hpp"

int main ( void )
{
    Fixed   a;
    Fixed   b ( a );
    Fixed   c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return (0);
}

/*let's understand what this main is doing */
/*
    First we instantiate an object a from the class Fixed
    Again we instantiate another object of the same class and we 
    pass to it the first created object. 
*/