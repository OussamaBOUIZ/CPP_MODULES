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
		this->_dataBase[dateString] = std::stod(exchangeRateString, nullptr);
	}
}

bool BitcoinExchange::_checkYearStringValidity ( string &yearString )
{ 
	try {
		int	yearAsNum = std::stoi(yearString);			
		if (yearAsNum < 2009 or yearAsNum > 2022)
			return (false);
	}
	catch ( ... ) {
		return (false);
	}
	return (true);
}
bool BitcoinExchange::_checkMonthStringValidity ( string &monthString )
{
	try {
		int	monthAsNum = std::stoi(monthString);			
		if (monthAsNum < 1 or monthAsNum > 12)
			return (false);
	}
	catch ( ... ) {
		return (false);
	}
	return (true);	
}
bool BitcoinExchange::_checkDayStringValidity ( string &dayString )
{
	try {
		int	dayAsNum = std::stoi(dayString);			
		if (dayAsNum < 1 or dayAsNum > 31)
			return (false);
	}
	catch ( ... ) {
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::_checkDateValidity ( string &dateString )
{
	string	yearString, monthString, dayString;
	size_t	firstDashIndex, secondDashIndex;

	firstDashIndex = dateString.find('-');
	yearString = dateString.substr(0, firstDashIndex);
	if (this->_checkYearStringValidity(yearString) == false)
		return (false);
	secondDashIndex = dateString.find('-', firstDashIndex + 1);
	monthString = dateString.substr(firstDashIndex + 1, 2);
	if (this->_checkMonthStringValidity(monthString) == false)
		return (false);
	dayString = dateString.substr(secondDashIndex + 1);
	if (this->_checkDayStringValidity(dayString) == false)
		return (false);
	return (true);
}

bool	BitcoinExchange::_checkValueValidity ( string &valueString )
{
	double	value;
	// std::string::size_type sz; 
	
	try {
		value = std::stod(valueString, nullptr);
	}
	catch ( const std::invalid_argument& excep) {
		this->_errorMessage("Not a number");
		return (false);
	}
	if (value < 0)
	{
		this->_errorMessage("Not a positive number");
		return (false);
	} else if (value > 1000)
	{
		this->_errorMessage("Large number");
		return (false);
	}
	return (true);
}

void	BitcoinExchange::_handleCurrentLine ( string &line )
{
	string	dateString;
	string	valueString;
	size_t	sepIndex;
	double	result = 0.0;

	sepIndex = line.find('|');
	if (sepIndex == std::string::npos)
	{
		this->_errorMessage("Bad input => " + line);
		return ;
	}
	dateString = line.substr(0, sepIndex);
	if (this->_checkDateValidity(dateString) == false)
	{
		this->_errorMessage("Bad Input => "+ dateString);
		return ;
	}
	valueString = line.substr(sepIndex + 1);
	if (this->_checkValueValidity(valueString) == false)
		return ;
	std::map<string, double>::iterator	lowBoundIt;

	lowBoundIt = this->_dataBase.lower_bound(dateString);
	lowBoundIt--;
	result = lowBoundIt->second * std::stod(valueString, nullptr);
	std::cout << dateString + " => " + valueString + " = " << result << std::endl;
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
