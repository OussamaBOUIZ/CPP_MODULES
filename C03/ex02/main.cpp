# include "FragTrap.hpp"

int main ( void )
{
	FragTrap	Snail, SnailTwo("A Snail");

	Snail = SnailTwo;

	Snail.highFiveGuys();
	FragTrap	HedgeHog("HedgeHog");

	HedgeHog.attack("Snail");
	HedgeHog.takeDamage(2);

	Snail.attack("HedgeHog");
	Snail.takeDamage(56);

	FragTrap	CaterPillar("Cater Pillar");

	CaterPillar.highFiveGuys();
	return (0);
}

