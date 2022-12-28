#include "Fixed.hpp"

/*
int main ( void )
{
    Fixed a(1233.45f);
    Fixed b(1233.5f);
    if (a > b)
        std::cout << "Yes a is bigger than b" << std::endl;
    else
        std::cout << "No a is smaller than b" << std::endl;

    Fixed c(33.23f);
    Fixed d(88.73f);

    Fixed sum = c + d;
    std::cout << "The sum is "<< sum << std::endl;
    Fixed subs = c - d;
    std::cout << "The subs of c and d is " << subs << std::endl;
    Fixed x(12.36f);
    Fixed y(20.36f);
    Fixed z = x * y;
    std::cout << "The product of x and y is " << z << std::endl;
    Fixed   div = x / y;
    std::cout << "The divison of x on y is "<< div << std::endl;
    return (0);
}

int main ( void )
{
    Fixed a(0);

    std::cout << "a++ " << a++ << std::endl;
    std::cout << "a "<< a << std::endl;
    return (0);
}
*/
int main ( void )
{

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;
    return (0);
}