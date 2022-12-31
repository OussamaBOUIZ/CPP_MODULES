#include "ClapTrap.hpp"

void	basicScenario( ClapTrap &obj, unsigned int damage, unsigned int repairs, const string &target )
{
	obj.takeDamage(damage);
	obj.attack(target);
	obj.beRepaired(repairs);
}

void	repetitiveAttack( ClapTrap &obj, const string &target, unsigned int repairs, unsigned int damage, size_t count )
{
	obj.takeDamage(damage);
	for (size_t i = 0; i < count; i++)
	{
		obj.attack(target);
		obj.beRepaired(repairs);
	}
}

void	unknownAttacker( ClapTrap obj, const string &target, unsigned int repairs, unsigned int damage)
{
	obj.takeDamage(damage);
	obj.attack(target);
	obj.beRepaired(repairs);
}

int	main( void )
{
	ClapTrap lizard("LIZARD");

	basicScenario(lizard, 50, 50, "LION");
	repetitiveAttack(lizard, "LION", 145, 100, 12);
	
	ClapTrap	Ghost;

	

	unknownAttacker(Ghost, "VOID", 42, 42);
	return (0);
}