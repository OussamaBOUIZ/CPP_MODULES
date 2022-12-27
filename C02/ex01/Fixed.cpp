#include "Fixed.hpp"
#include <iostream>
#include <math.h>

const int Fixed::fractionalBits = 8;

/* CONSTRUCTORS */

Fixed::Fixed ( const int number )
{
    // converts to the corresponding fixed-point value
	std::cout << "Int constructor called" << std::endl;
	fixedPointNumber = number << fractionalBits;
}

Fixed::Fixed (const float floatNumber)
{
    // converts to the corresponding fixed-point value
	std::cout << "Float constructor called" << std::endl;
	fixedPointNumber = roundf(floatNumber * pow(2, fractionalBits));	
}

Fixed::Fixed ( void )
{
    fixedPointNumber = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed ( void )
{
    std::cout << "Destructor called " << std::endl;
}

/* LET'S DEFINE THE COPY CONSTRUCTOR*/
Fixed::Fixed ( const Fixed &obj)
{
    fixedPointNumber = obj.fixedPointNumber;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed   &Fixed::operator= (const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    fixedPointNumber = obj.fixedPointNumber;
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fractionalBits);
}

float   Fixed::toFloat( void ) const
{
    // converts the fixed-point value to a floating point value
	float value = (float)(fixedPointNumber / pow(2, fractionalBits));
    return (value);
}

int   Fixed::toInt( void ) const
{
    // converts the fixed-point value to an integer value
    return ((int)(fixedPointNumber >> fractionalBits));
}

std::ostream &operator<< (std::ostream &out, const Fixed &obj)
{
    std::cout << obj.toFloat();
    return (out);
}