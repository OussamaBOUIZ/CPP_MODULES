#include "Zombie.hpp"

Zombie::Zombie( std::string name): _name(name){};

Zombie::~Zombie( void )
{
	std::cout << _name << " is getting DESTROYED 😈" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
