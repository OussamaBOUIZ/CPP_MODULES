#ifndef __SCAVTRAP_H__
# define __SCAVTRAP_H__
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap ( string name);
		ScavTrap ( void );
		~ScavTrap ( void );
		ScavTrap ( const ScavTrap & );
		ScavTrap	&operator= (const ScavTrap &);
		void	guardGate ( void );
};

#endif