#ifndef __WEAPON_H__
# define __WEAPON_H__

#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon( std::string type );
		const std::string	&getType( void );
		void setType( std::string newType );
	private:
		std::string type;
};

#endif