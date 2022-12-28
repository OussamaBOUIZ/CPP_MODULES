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
        bool    operator> (  const Fixed & );
        bool    operator< ( const Fixed & );
        bool    operator>= ( const Fixed & );
        bool    operator<= ( const Fixed & );
        bool    operator== ( const Fixed & );
        bool    operator!= ( const Fixed & );
        Fixed   operator+ ( const Fixed & );
        Fixed   operator- ( const Fixed & );
        Fixed   operator* ( const Fixed & );
        Fixed   operator/ ( const Fixed & );
		Fixed	operator++ ( void );
		Fixed	operator-- ( void );
		Fixed	operator++ ( int );
		Fixed	operator-- ( int );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat ( void ) const ;
		int		toInt ( void ) const;
};

std::ostream &operator<< (std::ostream &out, const Fixed &obj);

#endif