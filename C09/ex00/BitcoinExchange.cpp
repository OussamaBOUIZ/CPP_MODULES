# include "BitcoinExchange.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

BitcoinExchange::BitcoinExchange ( char *inputFileName )
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
	size_t			sepIndex;


	dataBaseFile.open(DEFAULT_DATABASE_FILE);
	if (!dataBaseFile)
	{
		this->_errorMessage("No database available!");
		exit(0);
	}
	std::getline(dataBaseFile, line);
	while (std::getline(dataBaseFile, line))
	{
		sepIndex = line.find(',');
		if (sepIndex == std::string::npos)
			exit (0); // D BETTER THROW EXCEPTION
		dateString = line.substr(0, sepIndex);
		exchangeRateString = line.substr(sepIndex + 1);
		this->_dataBase[dateString] = std::stod(exchangeRateString);
	}
	std::cout << "PARSING DONE!!!" << std::endl;
}

void	BitcoinExchange::_handleCurrentLine ( string &line )
{
	string	dateString;
	string	valueString;
	size_t	sepIndex;

	sepIndex = line.find('|');
	if (sepIndex == std::string::npos)
	{
		this->_errorMessage("bad input => " + line);
		return ;
	}
	dateString = line.substr(0, sepIndex);
	if (this->_checkDateValidity(dateString) == false)
		return ;
	valueString = line.substr(sepIndex + 1);
	if (this->_checkValueValidity(valueString) == false)
		return ;
}

bool	BitcoinExchange::_checkDateValidity ( string & )
{
	string	yearString, monthString, dayString;
	size_t	dashIndex;
	
}

void	BitcoinExchange::displayDataBase ( void )
{
	std::map<string, double>::iterator	it;

	it = this->_dataBase.begin();
	while (it != this->_dataBase.end())
	{
		std::cout << "Date : " << it->first << " exchange : " << it->second << std::endl;
		it++;
	}
}

void	BitcoinExchange::displayBitcoinExchange ( void )
{
	string	line;

	std::getline(this->_inputFile, line);
	// * Check if the first line is as : "date | value"
	while (std::getline(this->_inputFile, line))
		this->_handleCurrentLine(line);
}
