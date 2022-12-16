#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name): weapon(NULL), name(name){};

void	HumanB::attack( void )
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << "has no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}