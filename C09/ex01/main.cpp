# include "RPN.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
		errorMessage();
	RPN	Łukasiewicz(av[1]);

	Łukasiewicz.calculate();
	return (0);
}