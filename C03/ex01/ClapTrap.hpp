#ifndef CLAPTRAP_H_
# define CLAPTRAP_H_
# include <iostream>

typedef std::string string;

class ClapTrap {
    private:
        string  		 name;
        unsigned int     hitPoints; // Represents the health of the claptrap
        unsigned int     energyPoints;
        unsigned int     attackDamage;
    public:
        ClapTrap ( string name);
        ClapTrap ( void );
		~ClapTrap ( void );
        void    attack ( const string &target );
        void    takeDamage ( unsigned int amount );
        void    beRepaired ( unsigned int amount );
};

#endif