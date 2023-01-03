#include "WrongCat.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

WrongCat::WrongCat ( void )
{
	type = "WrongCat";
}
WrongCat::~WrongCat ( void )
{
	std::cout << "Wrong Cat Default constructor clalled " << std::endl;	
}

WrongCat	&WrongCat::operator= ( const WrongCat &obj )
{
	type = obj.type;
	return (*this);
}

WrongCat::WrongCat ( const WrongCat &obj )
{
	std::cout << "Wrong Cat Copy constructor called" << std::endl;
	*this = obj;
}

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

void	WrongCat::makeSound ( void ) const
{
	std::cout << "Wrong Cat Sound" << std::endl;
}