#ifndef _ANIMAL_H__
# define _ANIMAL_H__
# include <iostream>

typedef std::string string;

class AbstractAnimal {
    public:
		AbstractAnimal ( string type );
        AbstractAnimal ( void );
        ~AbstractAnimal ( void );
        AbstractAnimal ( const AbstractAnimal & );
        AbstractAnimal  &operator= ( const AbstractAnimal & );
		virtual void	makeSound ( void ) const = 0;
		string	getType ( void ) const;
    protected:
        string type;
};

#endif