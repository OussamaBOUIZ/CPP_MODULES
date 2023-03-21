# include "RPN.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "hola" << std::endl;
		errorMessage();
	}
	RPN	Łukasiewicz(av[1]);

	Łukasiewicz.calculate();
	return (0);
}