#ifndef __BRAIN__
# define __BRAIN__
# include <iostream>

typedef std::string string;

class Brain {
	string	ideas[100];
	public:
		Brain ( void );
		~Brain ( void );
		Brain ( const Brain & );
		Brain	&operator= ( const Brain & );
		void	fillBrain( void );
		void	changeBrain ( void );
		void	exposeBrain( void ) const;
};

#endif