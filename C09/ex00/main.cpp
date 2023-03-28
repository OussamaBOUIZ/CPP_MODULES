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
	ExchangeCalculator.displayBitcoinExchange();

	return (0);
}

/*
	2011-01-03 | 2
	2011-01-03 | 1
	2011-01-03 | 1.2
	2011-01-09 | 1
	2012-01-11 | -1
	2001-42-42
	2012-01-11 | 1
	2012-01-11 | 2147483648
*/