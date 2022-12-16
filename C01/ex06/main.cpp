#include "Harl.hpp"

int main ( int ac, char **av )
{
	Harl	Harly;

	if (ac != 2)
		{std::cerr << "NO LEVEL WAS SPECIFIED!!" << std::endl; return (1);}
	Harly.complain(av[1]);
	return (0);
}