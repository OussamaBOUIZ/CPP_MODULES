# include "BitcoinExchange.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

BitcoinExchange::BitcoinExchange ( std::string inputFileName )
{
	this->_inputFile.open(inputFileName);
	if (this->_inputFile.is_open() == 0)
	{
		std::cerr << "Unable to open file !!" << std::endl;
		exit(0);
	}
	this->_parseDataBaseFile();
}

BitcoinExchange::~BitcoinExchange ( void )
{}

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

void	BitcoinExchange::_parseDataBaseFile ( void )
{
	std::ifstream	dataBaseFile;
	string			line;
	string			dateString;
	string			exchangeRateString;


	dataBaseFile.open(DEFAULT_DATABASE_FILE);
	if (!dataBaseFile)
	{
		this->_errorMessage("No database available!");
		exit(0);
	}
	std::getline(dataBaseFile, line);
	while (std::getline(dataBaseFile, line))
	{
		/*   .... */
	}
}