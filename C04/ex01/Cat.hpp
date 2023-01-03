#ifndef __CAT_H__
# define __CAT_H__

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat: public Animal {
	public:
		Cat ( void );
		~Cat ( void );
		Cat ( const Cat & );
		Cat	&operator= ( const Cat & );
		void	makeSound ( void ) const;
		void	testing ( void ) const ;
		void	fillCatBrain ( void );
		void	changeCatBrain ( void );
		void	exposeCatBrain ( void ) const;
	private:
		Brain	*catBrain;
};


#endif