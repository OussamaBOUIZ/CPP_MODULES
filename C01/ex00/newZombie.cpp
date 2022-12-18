#include "Zombie.hpp"

Zombie	*newZombie( std::string name)
{
	Zombie	*nZombie;

	nZombie = new (std::nothrow) Zombie(name);
	if (nZombie == nullptr)
		{std::cerr << "new failed" << std::endl; exit(0);}
	return (nZombie);
}