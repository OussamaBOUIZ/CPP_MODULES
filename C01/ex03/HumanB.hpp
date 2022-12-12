#ifndef __HUMANB_H__
# define __HUMANB_H__
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack( void );
	private:
		Weapon		*weapon;
		std::string name;
};

#endif