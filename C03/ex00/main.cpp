#include "ClapTrap.hpp"

void	scenarioOne( ClapTrap &obj, unsigned int damage, unsigned int repairs )
{
	obj.takeDamage(damage);
	obj.attack("Lion");
	obj.beRepaired(repairs);
}

void	scenarioTwo( ClapTrap &obj, unsigned int damage, size_t count )
{
	obj.takeDamage(damage);
	for (size_t i = 0; i < count; i++)
		obj.attack("Lion");
}

int	main( void )
{
	ClapTrap lizard("lizard");

	scenarioOne(lizard, 50, 50);
	scenarioTwo(lizard, 100, 20);
	
	return (0);
}