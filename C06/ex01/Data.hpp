#ifndef __DATA_H__
# define __DATA_H__
# include <iostream>
typedef std::string string;

class Data {
	public:
		Data ( string );
		Data ( void );
		~Data ( void );
		Data ( const Data & );
		Data	&operator= ( const Data & );
		string	getName( void ) const;
		char	getCharValue( void ) const;
		int 	getIntValue( void ) const;
		float	getFloatValue( void ) const;
		double	getDoubleValue( void ) const;
	private:
		string	_name;
		char 	_charValue;
		int  	_intValue;
		float	_floatValue;
		double	_doubleValue;
};

std::ostream	&operator<< (std::ostream & , const Data &);

#endif