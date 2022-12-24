#ifndef CLAPTRAP_H_
# define CLAPTRAP_H_

typedef std::string string;

class ClapTrap {
    private:
        string  name;
        int     hitPoints; // Represents the health of the claptrap
        int     energyPoints;
        int     attackDamage;
    public:
        ClapTrap(string name);
        ClapTrap( void );
        void    attack(const string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
}

#endif