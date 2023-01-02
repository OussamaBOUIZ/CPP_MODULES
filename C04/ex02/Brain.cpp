# include "Brain.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

Brain::Brain ( void )
{
	
	std::cout << "Default Constructor of Brain called..." << std::endl;
}

Brain::~Brain ( void )
{
	
	std::cout << "Destroying Brain..." << std::endl;
}

Brain	&Brain::operator= ( const Brain &obj )
{
	for (int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
	return (*this);
}

Brain::Brain ( const Brain &obj )
{
	std::cout << "Copy Constructor of Brain called..." << std::endl;
	*this = obj;
}


/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

void	Brain::fillBrain( char **ideasArg , int numberOfIdeas )
{
	for ( int i = 0; i < numberOfIdeas; i++)
		ideas[i] = string(ideasArg[i]);
}

void	Brain::exposeBrain( void ) const
{
	for (int i = 0; i < 100 and !ideas[i].empty(); i++)
		std::cout << ideas[i] << std::endl;
}