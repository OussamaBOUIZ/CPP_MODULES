#ifndef __FIXED_H__
# define __FIXED_H__
# include <iostream>
class Fixed {
	private:
		int	fixedPointNumber;
		static const int fractionalBits = 8;
	public:
		Fixed ( const int number );
		Fixed ( const float floatNumber );
		Fixed ( void );
		Fixed ( const Fixed & );
		~Fixed ( void );
        Fixed   		&operator= ( const Fixed & );
        bool    		operator> (  const Fixed & ) const;
        bool    		operator< ( const Fixed & ) const;
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
		static Fixed		&min ( Fixed &obj1, Fixed &obj2 );
		static Fixed		&max ( Fixed &obj1, Fixed &obj2 );
		static const Fixed	&min ( const Fixed &obj1, const Fixed &obj2 );
		static const Fixed 	&max ( const Fixed &obj1, const Fixed &obj2 );
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