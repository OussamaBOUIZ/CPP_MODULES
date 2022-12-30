#include "FragTrap.hpp"

FragTrap::FragTrap(string name) : ClapTrap(name) {
    std::cout << "Constructing FragTrap "<< name << " ..." << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap ( void ) : ClapTrap()
{
    std::cout << "FragTrap Default Constructor called " << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::~FragTrap ( void )
{
	std::cout << "Destroying FragTrap "<< _name << "..." << std::endl;
}

FragTrap    &FragTrap::operator= ( const FragTrap &obj)
{
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	return (*this);
}

FragTrap::FragTrap ( const FragTrap &obj ) : ClapTrap(obj)
{
    *this = obj;
}

void    FragTrap::highFiveGuys( void )
{
    std::cout << _name << ": Hi!! Give me a High Five ✋ " << std::endl;
}
