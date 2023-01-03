#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	makeAppropriateSound(  Animal *animalPtr )
{
	std::cout << "         ------------" << std::endl;
	std::cout << std::endl;
	std::cout << "I am a " << animalPtr->getType() << std::endl;
	animalPtr->makeSound();
	std::cout << std::endl;
}

void	makeWrongAnimalSound( const WrongAnimal *wrongAnimalPtr )
{
	std::cout << "         ------------" << std::endl;
	std::cout << std::endl;
	std::cout << "I am a " << wrongAnimalPtr->getType() << std::endl;
	wrongAnimalPtr->makeSound();
	std::cout << std::endl;
}

int main ( void )
{

	/* Passing pointer of subclass to a func that takes in pointer to superclass */
	Dog	Rex;
	Cat	Tom;

	makeAppropriateSound(&Rex);
	makeAppropriateSound(&Tom);

	/* Assigning Pointer to subclass to variable with type of superclass pointer */

	Animal	*Felin = new Cat;
	Animal	*Canine = new Dog;

	makeAppropriateSound(Felin);
	makeAppropriateSound(Canine);

	/* Destroying Derived Object through Pointer to Base Object */
	delete Felin;
	delete Canine;
	std::cout << "----------------------------------------------------" << std::endl;

	return (0);
}


//Testing with WrongAnimal and WrongCat
/*
int main ( void )
{
	const WrongAnimal	*anyAnimal = new WrongAnimal;
	const WrongAnimal	*anyCat = new WrongCat();
	const WrongCat		*atLeastCat = new WrongCat();

	makeWrongAnimalSound(anyAnimal);
	makeWrongAnimalSound(anyCat);
	// Calling the make sound on a plain WrongCat type
	std::cout << "----- AT LEAST CAT -----" << std::endl;
	atLeastCat->makeSound();
	return (0);
}
*/


/*
//  SUBJECT MAIN 
int	main ( void )
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	//  FREEING MEMORY
	delete meta;
	delete j;
	delete i;
	return (0);
}
*/