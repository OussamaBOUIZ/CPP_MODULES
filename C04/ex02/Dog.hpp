#ifndef _DOG_H__
# define _DOG_H__

# include "AbstractAnimal.hpp"
# include "Brain.hpp"

class Dog: public AbstractAnimal {
    public:
        Dog ( void );
        ~Dog ( void );
        Dog ( const Dog & );
        Dog &operator= ( const Dog & );
		void	makeSound ( void ) const;
		void	fillDogBrain ( void );
		void	changeDogBrain ( void );
		void	exposeDogBrain ( void ) const;
	private:
		Brain	*dogBrain;
};

#endif