#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


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

