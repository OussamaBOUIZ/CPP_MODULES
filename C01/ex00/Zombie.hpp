#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__
#include <string>
#include <iostream>

class Zombie
{
	public:
		void	announce( void );
		Zombie( std::string name ): _name(name){};
		~Zombie( void );
	private:
		std::string _name;
};

Zombie	*newZombie( std::string );
void	randomChump( std::string );

#endif