#ifndef CLAPTRAP_H_
# define CLAPTRAP_H_
# include <iostream>

typedef std::string string;

class ClapTrap {
    public:
        ClapTrap ( string name);
        ClapTrap ( void );
		~ClapTrap ( void );
		ClapTrap ( const ClapTrap & );
		ClapTrap	&operator= ( const ClapTrap & );
        void    attack ( const string &target );
        void    takeDamage ( unsigned int amount );
        void    beRepaired ( unsigned int amount );
    protected:
        string  		 _name;
        unsigned int     _hitPoints; // Represents the health of the claptrap
        unsigned int     _energyPoints;
        unsigned int     _attackDamage;
};

#endif