#include "Dog.hpp"
#include "Brain.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

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
	std::cout << "Assignment operator called ..." << std::endl;
	type = obj.type;
	if (dogBrain)
		delete dogBrain;
	dogBrain = new Brain;
	for (size_t i = 0; i < 100; i++)
		dogBrain->ideas[i] = obj.dogBrain->ideas[i];
	return (*this);
}

Dog::Dog ( const Dog &obj )
{
	std::cout << "Copy Constructor of Cat called ..." << std::endl;
	type = obj.type;
	dogBrain = new Brain;
	for (size_t i = 0; i < 100; i++)
		dogBrain->ideas[i] = obj.dogBrain->ideas[i];
}

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

void	Dog::makeSound ( void ) const
{
	std::cout << "Dog Barking ..." << std::endl;
}

void	Dog::fillDogBrain( char **ideasArg, int numberOfIdeas )
{
	dogBrain->fillBrain(ideasArg, numberOfIdeas);
}

void	Dog::exposeDogBrain ( void ) const
{
	dogBrain->exposeBrain();
}