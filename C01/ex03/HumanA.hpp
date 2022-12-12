#ifndef __HUMANA_H__
# define __HUMANA_H__

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack( void );
	private:
		std::string name;
		Weapon		&weapon;
};

#endif
