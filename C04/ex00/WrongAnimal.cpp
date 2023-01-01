#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ( string type ) : type (type) {
    std::cout << "Constructing WrongAnimal of type "<< type << std::endl;
}

WrongAnimal::WrongAnimal ( void )
{
    type = "NOTYPE";
    std::cout << "Default Constructing WrongAnimal with no type "<< std::endl;
}

WrongAnimal::~WrongAnimal ( void )
{
    std::cout << "Destroying WrongAnimal of type "<< type << std::endl;
}

WrongAnimal  &WrongAnimal::operator= ( const WrongAnimal &obj )
{
    type = obj.type;
	return (*this);
}

WrongAnimal::WrongAnimal ( const WrongAnimal &obj)
{
	std::cout << "Copy constructor of WrongAnimal called ..." << std::endl;
    *this = obj;
}

void	WrongAnimal::makeSound ( void ) const
{
	std::cout << "WrongAnimal Sound ..." << std::endl;
}

string	WrongAnimal::getType( void ) const{
	return (type);
}
