#include "Cat.hpp"

Cat::Cat ( void )
{
	std::cout << "Cat Default Constructing ..." << std::endl;
	type = "Cat";
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

void	Cat::makeSound ( void ) const
{
	std::cout << "Cat mewing ..." << std::endl;
}
