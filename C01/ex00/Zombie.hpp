#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <string>
# include <iostream>
# include <new>

class Zombie
{
	public:
		void	announce( void );
		Zombie( std::string name );
		~Zombie( void );
	private:
		std::string _name;
};

Zombie	*newZombie( std::string name);
void	randomChump( std::string name);

#endif