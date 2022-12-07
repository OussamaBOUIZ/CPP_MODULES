#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__
#include <string>
#include <iostream>

class Zombie
{
	public:
		void	announce( void );
		Zombie	*newZombie( std::string );
		void	randomChump( std::string );
	private:
		std::string _name;
};

#endif