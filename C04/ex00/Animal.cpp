#include "Animal.hpp"

Animal::Animal ( string type ) : type (type) {
    std::cout << "Constructing Animal of type "<< type << std::endl;
}

Animal::Animal ( void )
{
    type = "NOTYPE";
    std::cout << "Default Constructing Animal with no type "<< std::endl;
}

Animal::~Animal ( void )
{
    std::cout << "Destroying Animal of type "<< type << std::endl;
}

Animal  &Animal::operator= ( const Animal &obj )
{
    type = obj.type;
}

Animal::Animal ( const Animal &obj)
{
    *this = obj;
}