#include "Zombie.hpp"

void	foo( void )
{
	Zombie	*nZombie = newZombie("Monkey");
	nZombie->announce();
	delete nZombie;
	printf("nZombie : %p\n", nZombie);
	// randomChump( "Unnamed Zombie");
	// nZombie = newZombie("nana");
	// nZombie->announce();
}

int main( void )
{
	foo();
	system("leaks -quiet zombie");
	return (0);
}