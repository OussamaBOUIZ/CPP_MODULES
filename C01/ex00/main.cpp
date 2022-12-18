#include "Zombie.hpp"

int main( void )
{
	Zombie	*nZombie = newZombie("Monkey");
	nZombie->announce();
	delete nZombie;
	randomChump("elephant");
	return (0);
}
