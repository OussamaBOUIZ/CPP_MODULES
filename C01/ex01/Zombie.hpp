#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__
#include <string>
#include <iostream>
#include <new>

class Zombie
{
	public:
		void	announce( void );
		Zombie ( void );
		std::string name;
};

Zombie	*zombieHorde( int N, std::string name );

#endif