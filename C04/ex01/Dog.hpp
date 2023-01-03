#ifndef _DOG_H__
# define _DOG_H__

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
    public:
        Dog ( void );
        ~Dog ( void );
        Dog ( const Dog & );
        Dog &operator= ( const Dog & );
		void	makeSound ( void ) const;
		void	fillDogBrain ( void );
		void	changeDogBrain ( void );
		void	exposeDogBrain ( void ) const;
		Brain	*dogBrain;
	private:
};

#endif