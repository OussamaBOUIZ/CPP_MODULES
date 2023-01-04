#include "AbstractAnimal.hpp"

AbstractAnimal::AbstractAnimal ( string type ) : type (type) {
    std::cout << "Constructing AbstractAnimal of type "<< type << std::endl;
}

AbstractAnimal::AbstractAnimal ( void )
{
    type = "NOTYPE";
    std::cout << "Default Constructing AbstractAnimal... "<< std::endl;
}

AbstractAnimal::~AbstractAnimal ( void )
{
    std::cout << "Destroying AbstractAnimal of type "<< type << std::endl;
}

AbstractAnimal  &AbstractAnimal::operator= ( const AbstractAnimal &obj )
{
    type = obj.type;
	return (*this);
}

AbstractAnimal::AbstractAnimal ( const AbstractAnimal &obj)
{
	std::cout << "Copy constructor of AbstractAnimal called ..." << std::endl;
    *this = obj;
}

void	AbstractAnimal::makeSound ( void ) const
{
	std::cout << "AbstractAnimal Sound ..." << std::endl;
}

string	AbstractAnimal::getType( void ) const{
	return (type);
}
