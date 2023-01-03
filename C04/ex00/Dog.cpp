#include "Dog.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

Dog::Dog ( void )
{
	std::cout << "Default Constructing Dog..." << std::endl;
	type = "Dog 🐶";
}

Dog::~Dog ( void )
{
	std::cout << "Dog Destroying ..." << std::endl;
}

Dog	&Dog::operator= ( const Dog &obj )
{
	type = obj.type;
	return (*this);
}

Dog::Dog ( const Dog &obj )
{
	std::cout << "Copy Constructor of Dog called ..." << std::endl;
	*this = obj;
}
/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

void	Dog::makeSound ( void ) const
{
	std::cout << "The Dog Barks ..." << std::endl;
}