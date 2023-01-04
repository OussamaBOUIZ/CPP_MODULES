#include "Dog.hpp"
#include "Brain.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

Dog::Dog ( void )
{
	std::cout << "Default Constructing Dog..." << std::endl;
	type = "Dog 🐶";
	dogBrain = new Brain;
}

Dog::~Dog ( void )
{
	std::cout << "Destroying Dog ..." << std::endl;
	delete dogBrain;
}

Dog	&Dog::operator= ( const Dog &obj )
{
	std::cout << "DOG Assignment operator called ..." << std::endl;
	type = obj.type;
	if (dogBrain)
		delete dogBrain;
	dogBrain = new Brain;
	*dogBrain = *(obj.dogBrain);
	return (*this);
}

Dog::Dog ( const Dog &obj )
{
	std::cout << "Copy Constructor of Dog called ..." << std::endl;
	type = obj.type;
	dogBrain = new Brain;
	*dogBrain = *(obj.dogBrain);
}

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

void	Dog::makeSound ( void ) const
{
	std::cout << "Dog Barking ..." << std::endl;
}

void	Dog::fillDogBrain( void )
{
	dogBrain->fillBrain();
}

void	Dog::changeDogBrain( void )
{
	dogBrain->changeBrain();
}

void	Dog::exposeDogBrain ( void ) const
{
	std::cout << "🐶 says : " << std::endl;
	dogBrain->exposeBrain();
}