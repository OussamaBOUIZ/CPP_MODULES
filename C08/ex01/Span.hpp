#ifndef __SPAN_H__
# define __SPAN_H__
# include <exception>
# include <iostream>
# include <vector>

class Span {
	public:
		Span ( unsigned int );
		Span ( void );
		~Span ( void );
		Span ( const Span & );
		Span	&operator= ( const Span & );
		void	addNumber ( unsigned int );
		void	addListOfNumbers ( std::vector<unsigned int> );
		unsigned int	shortestSpan ( void ) const;
		unsigned int	longestSpan ( void ) const;
		unsigned int	size( void ) const;
		void			display ( void );
	private:
		std::vector<unsigned int>	_content;
		unsigned int	_size;
		unsigned int	_maxSize;
};

#endif

