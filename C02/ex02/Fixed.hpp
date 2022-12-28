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
        Fixed   		&operator= ( const Fixed & );
        bool    		operator> (  const Fixed & );
        bool    		operator< ( const Fixed & );
        bool    		operator>= ( const Fixed & );
        bool    		operator<= ( const Fixed & );
        bool    		operator== ( const Fixed & );
        bool    		operator!= ( const Fixed & );
        Fixed   		operator+ ( const Fixed & );
        Fixed   		operator- ( const Fixed & );
        Fixed   		operator* ( const Fixed & );
        Fixed   		operator/ ( const Fixed & );
		Fixed			operator++ ( void );
		Fixed			operator-- ( void );
		Fixed			operator++ ( int );
		Fixed			operator-- ( int );
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		float			toFloat ( void ) const ;
		int				toInt ( void ) const;
		static Fixed	&min ( Fixed &, Fixed & );
		static Fixed	&min ( const Fixed &, const Fixed & );
		static Fixed	&max ( Fixed &, Fixed & );
		static Fixed	&max ( const Fixed &, const Fixed & );
};

std::ostream &		operator<< (std::ostream &out, const Fixed &obj);

/*
•••••••••••••••••••••••••••••••••••••••
• A static member function min that takes as parameters two references on fixed-point
numbers, and returns a reference to the smallest one.

• A static member function min that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the smallest one.

• A static member function max that takes as parameters two references on fixed-point
numbers, and returns a reference to the greatest one.

• A static member function max that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the greatest one.
•••••••••••••••••••••••••••••••••••••••
*/
#endif