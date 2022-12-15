#include "Harl.hpp"

int main ( int ac, char **av )
{
	Harl	Harly;

	if (ac != 2)
		return (1);
	Harly.complain(av[1]);
	return (0);
}