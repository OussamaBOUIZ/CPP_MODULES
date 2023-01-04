#include "AbstractAnimal.hpp"
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

int main ( void )
{
	// This won't compile
	/*
		AbstractAnimal myAnimal;
	*/
	// This compiles
	Dog	Petty = createSmartDog();

	std::cout << Petty.getType() << std::endl;

	Cat	Kitty = createSmartCat();
	std::cout << Kitty.getType() << std::endl;

	exposeSmartDogBrain(Petty);
	exposeSmartCatBrain(Kitty);
	return (0);
	
}