# include "Span.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

Span::Span ( unsigned int N )
{
	_maxSize = N;
}

Span::Span ( void ) { }

Span::~Span ( void ) { }

Span	&Span::operator= ( const Span &obj )
{
	if (this == &obj)
		return (*this);
	this->_content = obj._content;
	return (*this);
}

Span::Span ( const Span &obj )
{
	*this = obj;
}

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

unsigned int	Span::size( void ) const
{
	return (_size);
}

void	Span::addNumber ( unsigned int number )
{
	if (_size <= _maxSize - 1) {
		_content.push_back(number);
		_size++;
	}
	else 
		throw std::out_of_range("Span Full");
}



// unsigned int	Span::shortestSpan ( void ) const
// {
// 	unsigned int shortestSpanValue = UINT_MAX;

// 	for (unsigned int i = 0; i < _size ; i++)
// 	{
		
// 	}
// 	return (shortestSpanValue);
// }
// unsigned int	Span::longestSpan ( void ) const
// {
// 	unsigned int longestSpanValue = UINT_MAX;

// 	for (unsigned int i = 0; i < _size ; i++)
// 	{

// 	}
// 	return (longestSpanValue);

// }