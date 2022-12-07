#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	newZombie( std::string name )
{
	Zombie *newZombie = new Zombie;
	newZombie->_name = name;
	return (newZombie);
}