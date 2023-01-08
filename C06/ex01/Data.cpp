# include "Data.hpp"

Data::Data ( string name )
	:	_name(name),
		_charValue('A'),
		_intValue(42),
		_floatValue(4.23f),
		_doubleValue(12.001245)
{}

Data::Data ( void )
	:	_charValue('A'),
		_intValue(42),
		_floatValue(4.23f),
		_doubleValue(12.001245)
{}

Data::~Data ( void ) {}

Data	&Data::operator= ( const Data &obj )
{
	if (this == &obj)
		return (*this);
	this->_charValue = obj._charValue;
	this->_intValue = obj._intValue;
	this->_floatValue = obj._floatValue;
	this->_doubleValue = obj._doubleValue;
	return (*this);
}

Data::Data ( const Data &obj ) { *this = obj; }

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */


string	Data::getName( void ) const { return (_name);}
char	Data::getCharValue( void ) const { return (_charValue);}
int 	Data::getIntValue( void ) const { return (_intValue);}
float	Data::getFloatValue( void ) const { return (_floatValue);}
double	Data::getDoubleValue( void ) const { return (_doubleValue);}

std::ostream	&operator<< (std::ostream &out , const Data &obj)
{
	out << "Name : " << obj.getName() << std::endl;
	out << "CharValue : " << obj.getCharValue() << std::endl;
	out << "IntValue : " << obj.getIntValue() << std::endl;
	out << "FloatValue : " << obj.getFloatValue() << std::endl;
	out << "DoubleValue : " << obj.getDoubleValue();

	return (out);
}
