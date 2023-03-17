# include "BitcoinExchange.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

// BitcoinExchange::BitcoinExchange ( ARGS )
// {
	
// }

BitcoinExchange::BitcoinExchange ( void )
{
	std::ifstream	dataBaseFile;

	dataBaseFile.open(DEFAULT_DATABASE_FILE);
	if (!dataBaseFile)
		this->_errorMessage("No database available!");
	this->_parseDataBaseFile();
}

BitcoinExchange::~BitcoinExchange ( void )
{
	
}

BitcoinExchange	&BitcoinExchange::operator= ( const BitcoinExchange &obj )
{
	if (this == &obj)
		return (*this);
	return (*this);
}

BitcoinExchange::BitcoinExchange ( const BitcoinExchange &obj )
{
	*this = obj;
}

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

void	BitcoinExchange::_errorMessage ( std::string message )
{
	std::cerr << "Error: " << message << std::endl;
}