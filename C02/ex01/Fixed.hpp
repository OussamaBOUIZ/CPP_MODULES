#ifndef __FIXED_H__
# define __FIXED_H__
# include <iostream>
class Fixed {
	private:
		int	fixedPointNumber;
		static const int fractionalBits;
	public:
		Fixed ( const int number );
		Fixed ( const float floatNumber );
		Fixed ( void );
		Fixed ( const Fixed & );
		~Fixed ( void );
        Fixed   &operator= ( const Fixed & );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat ( void ) const ;
		int		toInt ( void ) const;
};

std::ostream &operator<< (std::ostream &out, const Fixed &obj);

#endif


/* https://www.youtube.com/watch?v=ZMsrZvBmQnU */
/* Fixed Point numbers in C++ */