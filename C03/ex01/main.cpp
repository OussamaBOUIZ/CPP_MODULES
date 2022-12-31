#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	scenarioOne( ClapTrap &obj, unsigned int damage, unsigned int repairs )
{
	obj.takeDamage(damage);
	obj.attack("Lion");
	obj.beRepaired(repairs);
}

void	scenarioTwo ( ClapTrap &obj, unsigned int damage, size_t count )
{
	obj.takeDamage(damage);
	for (size_t i = 0; i < count; i++)
		obj.attack("Lion");
}

// int	main( void )
// {

// 	ScavTrap	gecko("Gecko");
// 	scenarioOne(gecko, 50, 50);
// 	return (0);
// }

int main ( void )
{
	ScavTrap	Ant("Ant");

	Ant.attack("shit");
	ScavTrap AnotherAnt;

	Ant.attack("Beetle");
	Ant.takeDamage(42);
	Ant.beRepaired(457);
	AnotherAnt.guardGate();

	ScavTrap CaterPillar("CaterPillar");

	CaterPillar.attack("Ant");
	Ant.beRepaired(256);
	Ant.attack("CaterPillar");
	return (0);
}