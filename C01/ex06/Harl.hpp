#ifndef __HARL_H__
# define __HARL_H__
# include <iostream>

typedef std::string string;
class	Harl
{
	public:
		void	complain( string level );
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		
};

typedef void	(Harl::*ptrFunc)( void );

#endif