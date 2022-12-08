#include "Zombie.hpp"

Zombie	*newZombie( std::string name)
{
	Zombie	*nZombie;

	nZombie = new Zombie(name);
	return (nZombie);
}