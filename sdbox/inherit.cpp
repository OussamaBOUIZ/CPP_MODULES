#include <iostream>
#include "inherit.hpp"

void    Animal::eat ( void ) {std::cout << "I eat "<< std::endl;}
void    Animal::sleep ( void ) {std::cout << "I sleep "<< std::endl;}

/* simple inheritence */
/*
int  main ( void )
{
    Dog dog1;

    dog1.eat();
    return (0);
}
*/

void    Dog::eat( void )
{
    std::cout << "I am a dog and I eat ..." << std::endl;
}

void    Vehicle::drive( void )
{
    std::cout << "Driving ... " << std::endl;
}

void    Camel::grunt( void )
{
    std::cout << "Grunting ... "<< std::endl;
}

int main ( void )
{
    Camel   camel;

    camel.drive();
    camel.eat();
    camel.grunt();
    camel.sleep();
    Dog dog1;

    dog1.eat();
    return (0);
}