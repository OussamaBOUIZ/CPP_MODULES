# include "BitcoinExchange.hpp"
# include <iostream>

int	main(int ac, char **av)
{

	if (ac != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (1);
	}
	BitcoinExchange	ExchangeCalculator(av[1]);
	// ExchangeCalculator.displayDataBase();
	ExchangeCalculator.displayBitcoinExchange();
	return (0);
}