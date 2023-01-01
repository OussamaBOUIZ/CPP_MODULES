#ifndef __WRONGCAT_H__
# define __WRONGCAT_H__
# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat: public WrongAnimal {
	public:
		WrongCat ( void );
		~WrongCat ( void );
		WrongCat ( const WrongCat & );
		WrongCat	&operator= ( const WrongCat & );
		void	makeSound ( void ) const;
};


#endif