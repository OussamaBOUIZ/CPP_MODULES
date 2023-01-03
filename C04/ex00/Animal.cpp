#include "Animal.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

// Animal::Animal ( string type ) : type (type) {
//     std::cout << "Constructing Animal of type "<< type << std::endl;
// }

Animal::Animal ( void )
{
    type = "NOTYPE";
    std::cout << "Default Constructing Animal... "<< std::endl;
}

Animal::~Animal ( void )
{
    std::cout << "Destroying Animal of type "<< type << std::endl;
}

Animal  &Animal::operator= ( const Animal &obj )
{
    type = obj.type;
	return (*this);
}

Animal::Animal ( const Animal &obj)
{
	std::cout << "Copy constructor of Animal called ..." << std::endl;
    *this = obj;
}

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

void	Animal::makeSound ( void ) const
{
	std::cout << "Animal Sound ..." << std::endl;
}

string	Animal::getType( void ) const
{
	return (type);
}