#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

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