#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main ( int ac, char **av )
{
	Brain myBrain;

	myBrain.fillBrain( av + 1, ac - 1 );
	myBrain.exposeBrain();

	Brain	yourBrain = myBrain;
	yourBrain.exposeBrain();
	return (0);
}