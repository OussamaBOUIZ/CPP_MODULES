#ifndef __FIXED_H__
# define __FIXED_H__

class Fixed {
	private:
		int	fixedPointNumber;
		static const int fractionalBits;
	public:
		Fixed ( void );
		Fixed ( const Fixed & );
		// a copy assignment operator overload;
		~Fixed ( void );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif