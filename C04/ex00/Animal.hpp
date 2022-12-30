#ifndef _ANIMAL_H__
# define _ANIMAL_H__
# include <iostream>

typedef std::string string;

class Animal {
    public:
        Animal (string type);
        Animal ( void );
        ~Animal ( void );
        Animal ( const Animal & );
        Animal  &operator= ( const Animal & );
    protected:
        string type;
};
#endif