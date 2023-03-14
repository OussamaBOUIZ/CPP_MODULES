# include "BitcoinExchange.hpp"
# include <iostream>
# define DEFAULT_DATABASE_FILE "./data.csv"

int	main(int ac, char **av)
{

	const char	*dataBaseFile;

	dataBaseFile = (ac == 2) ? (char *)av[1] : DEFAULT_DATABASE_FILE;
	return (0);
}