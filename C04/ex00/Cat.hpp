#ifndef __CAT_H__
# define __CAT_H__
# include "Animal.hpp"
# include <iostream>

class Cat: public Animal {
	public:
		Cat ( void );
		~Cat ( void );
		Cat ( const Cat & );
		Cat	&operator= ( const Cat & );
		void	makeSound ( void ) const;
};


#endif