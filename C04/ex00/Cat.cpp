#include "Cat.hpp"
/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

Cat::Cat ( void )
{
	std::cout << "Default Constructing Cat ..." << std::endl;
	type = "Cat 😸";
}

Cat::~Cat ( void )
{
	std::cout << "Cat Destroying ..." << std::endl;
}

Cat	&Cat::operator= ( const Cat &obj )
{
	type = obj.type;
	return (*this);
}

Cat::Cat ( const Cat &obj )
{
	std::cout << "Copy Constructor of Cat called ..." << std::endl;
	*this = obj;
}

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

void	Cat::makeSound ( void ) const
{
	std::cout << "The Cat mew ..." << std::endl;
}
