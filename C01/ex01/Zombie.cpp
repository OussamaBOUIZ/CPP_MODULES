#include "Zombie.hpp"

Zombie::Zombie( void )
{
	name = "noname";
}

void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
