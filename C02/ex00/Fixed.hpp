#ifndef __FIXED_H__
# define __FIXED_H__

class Fixed {
	private:
		int	fixedPointNumber;
		static const int fractionalBits = 8;
	public:
		Fixed ( void );
		Fixed ( const Fixed & );
		~Fixed ( void );
        Fixed   &operator= ( const Fixed & );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif


