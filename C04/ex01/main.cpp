#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

Cat	createSmartCat ( void )
{
	Cat	Genius;

	Genius.fillCatBrain();
	return (Genius);
}

Dog	createSmartDog ( void )
{
	Dog	Clever;

	Clever.fillDogBrain();
	return (Clever);
}

void	exposeSmartCatBrain ( Cat aCat ) { 	
	aCat.exposeCatBrain();
}

void	exposeSmartDogBrain ( Dog aDog ) {
	aDog.exposeDogBrain();
}


/*
int main ( void )
{
	Dog	Clever = createSmartDog();
	exposeSmartDogBrain( Clever );

	Dog g;

	g = Clever;

	Cat Genius = createSmartCat();
	exposeSmartCatBrain( Genius );

	return (0);
}

int main ( void )
{
	Dog	Fast, Slow;

	Fast.fillDogBrain();
	Slow.fillDogBrain();
	Fast.exposeDogBrain();
	Slow.exposeDogBrain();
	// change Fast Brain
	Fast.changeDogBrain();
	Fast.exposeDogBrain();
	Slow.exposeDogBrain();
	return (0);
}
*/

int main ( void )
{
	Animal	*zoo[10];
	
	// creating objects
	for (size_t i = 0; i < 10; i++)
	{
		if (i < 5)
			zoo[i] = new Dog;
		else
			zoo[i] = new Cat;
	}
	
	// Using objects
	for (size_t i = 0; i < 10; i++)
		zoo[i]->makeSound();

	// deleting objects
	for (size_t i = 0; i < 10; i++)
		delete zoo[i];
	return (0);
}
