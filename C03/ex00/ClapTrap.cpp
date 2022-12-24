#include "ClapTrap.hpp"

/*--OCCF--*/

ClapTrap::ClapTrap(string name): name(name) 
{
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "Constructing "<< name << std::endl;
}

ClapTrap::ClapTrap( void )
{
    name = "unnamed";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::˜ClapTrap( void )
{
    std::cout << "Destroying " << name << " ..." << std::endl;
}

void    ClapTrap::attack(const string &target)
{
    // if no hit points or energy points are left, do nothing
    if (!hitPoints or !energyPoints)
    {
        std::cout << "No Points left " << name << " cannot attack" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    // if no hit points or energy points are left, do nothing
    // it gets <amount> hits point back 
    /*This costs 1 energy point*/
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    return ;
}