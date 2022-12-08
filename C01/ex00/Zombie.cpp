#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << _name << " is getting DESTROYED 😈" << std::endl;
}