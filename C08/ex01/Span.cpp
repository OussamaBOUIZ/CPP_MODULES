# include "Span.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

Span::Span ( unsigned int N )
{
	_maxSize = N;
	_size = 0;
}

Span::Span ( void ) { 
	_size = 0;
}

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
	if (_size < _maxSize ) {
		_content.push_back(number);
		_size++;
	}
	else
	{
		throw std::out_of_range("The Container is Full");
	} 
}

void	Span::addListOfNumbers ( std::vector<unsigned int> numbers )
{
	std::vector<unsigned int>::iterator it;

	for (it = numbers.begin(); it != numbers.end(); ++it)
		addNumber(*it);
}

unsigned int	Span::shortestSpan ( void ) const
{
	unsigned int currentSpan;
	std::vector<unsigned int> tempVector;

	tempVector = this->_content;
	unsigned int shortestSpanValue = tempVector[1] - tempVector[0];
	std::sort(tempVector.begin(), tempVector.end());
	for (unsigned int i = 1; i < tempVector.size(); i++)
	{
		currentSpan = tempVector[i] - tempVector[i - 1];
		if (currentSpan < shortestSpanValue)
			shortestSpanValue = currentSpan;
	}
	return (shortestSpanValue);
}

void	Span::display ( void )
{
	std::vector<unsigned int>::iterator it = this->_content.begin();

	for (; it != _content.end(); it++)
		  std::cout << *it << std::endl;
}

unsigned int	Span::longestSpan ( void ) const
{
	unsigned int maxVectorElement  = *(std::max_element(_content.begin(), _content.end()));
	unsigned int minVectorElement  = *(std::min_element(_content.begin(), _content.end()));
	return (maxVectorElement - minVectorElement);
}