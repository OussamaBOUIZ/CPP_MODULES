#ifndef _DOG_H__
# define _DOG_H__
# include "Animal.hpp"

class Dog: public Animal {
    public:
        Dog ( void );
        ~Dog ( void );
        Dog ( const Dog &);
        Dog &operator= ( const Dog &);
		virtual void	makeSound ( void ) const;
};

#endif