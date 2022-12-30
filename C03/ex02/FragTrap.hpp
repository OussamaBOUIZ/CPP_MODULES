#ifndef __FRAGTRAP_H__
# define __FRAGTRAP_H__
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap ( string name );
		FragTrap ( void );
		~FragTrap ( void );
		FragTrap ( const FragTrap &);
		FragTrap	&operator= ( const FragTrap & );
		void	highFiveGuys ( void );
};
#endif