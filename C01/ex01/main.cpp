#include "Zombie.hpp"

int	main(int ac, char **av)
{
	Zombie	*z;

	if (ac < 3)
	{
		std::cerr << "Incomplete Arguments" << std::endl; 
		std::cerr << "Pass Respectively a number and a Name :)" << std::endl; 
		return (1);
	}
	z = zombieHorde(atoi(av[1]), av[2]);
	for (int i = 0; i < atoi(av[1]); i++)
		z[i].announce();
	delete [] z;
	return (0);
}

