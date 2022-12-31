#include "ClapTrap.hpp"

/*--OCCF--*/

ClapTrap::ClapTrap(string name): _name(name) 
{
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "Constructing ClapTrap "<< name << std::endl;
}

ClapTrap::ClapTrap( void )
{
	std::cout << "ClapTrap Default Constructor called " << std::endl;
    _name = "UNNAMED";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destroying ClapTrap " << _name << " ..." << std::endl;
}

ClapTrap	&ClapTrap::operator= ( const ClapTrap &obj)
{
	_name  = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	return (*this);
}

ClapTrap::ClapTrap ( const ClapTrap &obj)
{
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	*this = obj;
}

void    ClapTrap::attack(const string &target)
{
    // if no hit points or energy points are left, do nothing
    if (!_hitPoints or !_energyPoints)
    {
        std::cout << "No Points left " << _name << " cannot attack" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (!_hitPoints or !_energyPoints)
    {
        std::cout << "No Points left " << _name << " cannot be repaired!!!" << std::endl;
        return ;
    }
    _energyPoints--;
	_hitPoints += amount;
    std::cout << "ClapTrap " << _name << " gets " << amount << " hit points " << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	_attackDamage += amount;
    std::cout << "ClapTrap " << _name << " gets " << amount << " of damage" << std::endl;
}