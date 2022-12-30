#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( string name ) : ClapTrap(name) {
	std::cout << "Constructing ScavTrap " << _name << " ..." << std::endl;	
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
} 

ScavTrap::ScavTrap ( void ): ClapTrap() {
	std::cout << "ScavTrap Default constructor called ..." << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap ( void )
{
	std::cout << "Destructing ScavTrap "<< _name << "..." << std::endl;
}

ScavTrap	&ScavTrap::operator= ( const ScavTrap &obj)
{
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	return (*this);
}

ScavTrap::ScavTrap( const ScavTrap &obj): ClapTrap(obj)
{
	*this = obj;
}

void	ScavTrap::guardGate ( void ) 
{
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper Mode" << std::endl;
}

