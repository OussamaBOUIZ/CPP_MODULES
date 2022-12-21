#ifndef __FIXED_H__
# define __FIXED_H__

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
		// overloading some operators needed here.
};

#endif