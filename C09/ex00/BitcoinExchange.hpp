#ifndef __BITCOINEXCHANGE_H__
# define __BITCOINEXCHANGE_H__
# define DEFAULT_DATABASE_FILE "./data.csv"
# include <iostream>
# include <fstream>
# include <map>

typedef std::string string;

class BitcoinExchange {
	public:
		BitcoinExchange ( string );
		~BitcoinExchange ( void );
		BitcoinExchange ( const BitcoinExchange & );
		BitcoinExchange	&operator= ( const BitcoinExchange & );
		void	displayResults ( void );
	private:
		void								_errorMessage ( string );
		void								_parseDataBaseFile ( void );
		std::map<string, string>	_dataBase;
		std::ifstream						_inputFile;
};

/*
	for each line in the input file we should  find the corresponding bitcoin price
	and then return the value multiplied by the exchange rate found on the database
	
	CASES: 
		* Checking if the input date is valid
		* Checking if the value is either float or a positive number
		* Checking if the value is respecting the range
*/


#endif