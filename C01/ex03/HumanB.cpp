#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name): name(name) , weapon(NULL){};

void	HumanB::attack( void )
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}