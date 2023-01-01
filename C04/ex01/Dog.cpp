#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog ( void )
{
	std::cout << "Default Constructing Dog..." << std::endl;
	type = "Dog";
	dogBrain = new Brain;
}

Dog::~Dog ( void )
{
	std::cout << "Destroying Dog ..." << std::endl;
	delete dogBrain;
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

void	Dog::makeSound ( void ) const
{
	std::cout << "Dog Barking ..." << std::endl;
}