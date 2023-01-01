#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


/*---- MAIN TESTING ----*/

int main ( void )
{
	const Animal	*meta = new Animal("donkey");
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	return (0);
}

/* Testing with WrongAnimal and WrongCat*/
/*
int main ( void )
{
	const WrongAnimal	*meta = new WrongAnimal("Donkey");
	const Animal	*j = new Dog();
	const WrongAnimal	*i = new WrongCat();
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	return (0);
}
*/