#include "WrongAnimal.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */


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

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

void	WrongAnimal::makeSound ( void ) const
{
	std::cout << "WrongAnimal Sound ..." << std::endl;
}

string	WrongAnimal::getType( void ) const{
	return (type);
}
