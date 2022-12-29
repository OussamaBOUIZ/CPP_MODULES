#ifndef _INHERIT_H_
# define _INHERIT_H_
# include <iostream>

class Animal {
    public :
        void    eat( void );
        void    sleep ( void );
};

class Vehicle {
    public:
        void    drive ( void );
};

class Dog : public Animal {
    public:
        void    bark ( void );
        void    eat ( void );
};

class Camel : public Animal, public Vehicle {
    public:
        void    grunt ( void );
};


# endif