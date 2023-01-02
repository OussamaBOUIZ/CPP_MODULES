#include "Cat.hpp"
#include "Brain.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

Cat::Cat ( void )
{
	std::cout << "Default Constructing Cat ..." << std::endl;
	type = "Cat";
	catBrain = new Brain;
}

Cat::~Cat ( void )
{
	std::cout << "Cat Destroying ..." << std::endl;
	delete catBrain;	
}
Cat	&Cat::operator= ( const Cat &obj )
{
	std::cout << "Assignment operator called ..." << std::endl;
	type = obj.type;
	if (catBrain)
		delete catBrain;
	catBrain = new Brain;
	for (size_t i = 0; i < 100; i++)
		catBrain->ideas[i] = obj.catBrain->ideas[i];
	return (*this);
}

Cat::Cat ( const Cat &obj )
{
	std::cout << "Copy Constructor of Cat called ..." << std::endl;
	type = obj.type;
	catBrain = new Brain;
	for (size_t i = 0; i < 100; i++)
		catBrain->ideas[i] = obj.catBrain->ideas[i];
}

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */



void	Cat::makeSound ( void ) const
{
	std::cout << "Cat mewing ..." << std::endl;
}


void	Cat::testing ( void ) const {
	std::cout << "testing CAT..." << std::endl;
}

void	Cat::fillCatBrain( char **ideasArg, int numberOfIdeas )
{
	catBrain->fillBrain(ideasArg, numberOfIdeas);
}

void	Cat::exposeCatBrain ( void ) const
{
	catBrain->exposeBrain();
}