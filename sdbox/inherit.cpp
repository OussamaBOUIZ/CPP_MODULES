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

class A {
    public:
    A(int a, int b) : a(a), b(b) {};
    A &operator = (const A &obj)
    {
        std::cout << "== called" << std::endl;
        a = obj.a + 5;
        b = obj.b + 10;
        return (*this);
    }
    void    displayMembers( void ) const
    {
        std::cout << "a : " << a  << std::endl;
        std::cout << "b : " << b << std::endl;
    }
    protected:
        int a, b;
};

class B: public A {
    public:
        B(int a, int b) : A(a, b) {};
        B   &operator= (const B &obj) : opera 
};

int main ( void )
{
    B myclass(4, 7);

    B   anotherClass = myclass;
    myclass.displayMembers();
    anotherClass.displayMembers();

    return (0);
}

