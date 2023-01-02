#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/*
int main ( int ac, char **av )
{
	Brain myBrain;

	myBrain.fillBrain( av + 1, ac - 1 );
	myBrain.exposeBrain();

	Brain	yourBrain = myBrain;
	yourBrain.exposeBrain();
	return (0);
}

int main ( void )
{
	// Animal	*Flora1, *Flora2;
	Cat	mycat;

	std::cout << "-------------------------" << std::endl;
	
	Cat yourcat; // default constructor
	yourcat = mycat; // copy assignment operator
	
	std::cout << "-------------------------" << std::endl;
	Cat hisCat = yourcat; // copy constructor called 
	std::cout << hisCat.getType() << std::endl;
	while (1);
	return (0);
}

*/

/* ----------------------------------------------------- */
/* ------------------       RENDU      ----------------- */
/* ----------------------------------------------------- */

int main ( void )
{
	Animal	*zoo[10];
	
	for (size_t i = 0; i < 10; i++)
	{
		if (i < 5)
			zoo[i] = new Dog;
		else
			zoo[i] = new Cat;
	}
	for (size_t i = 0; i < 10; i++)
	{
		/* code */
		delete zoo[i];
	}
	
	return (0);
}