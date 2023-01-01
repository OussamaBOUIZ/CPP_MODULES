#ifndef __BRAIN__
# define __BRAIN__
# include <iostream>

typedef std::string string;

class Brain {
	public:
		Brain ( void );
		~Brain ( void );
		Brain ( const Brain & );
		Brain	&operator= ( const Brain & );
		void	fillBrain( char **, int );
		void	exposeBrain( void ) const;
	private:
		string	ideas[100];
};

#endif