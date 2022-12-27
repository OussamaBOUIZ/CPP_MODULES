#include "Fixed.hpp"

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
    return (0);
}