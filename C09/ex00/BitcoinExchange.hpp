#ifndef __BITCOINEXCHANGE_H__
# define __BITCOINEXCHANGE_H__
# define DEFAULT_DATABASE_FILE "./data.csv"

class BitcoinExchange {
	public:
		BitcoinExchange ( void );
		~BitcoinExchange ( void );
		BitcoinExchange ( const BitcoinExchange & );
		BitcoinExchange	&operator= ( const BitcoinExchange & );
	/*
		* This class will use the database.csv which represents bitcoin price
		over time
	*/
};


#endif