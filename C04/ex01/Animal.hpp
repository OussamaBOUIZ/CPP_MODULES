#ifndef _ANIMAL_H__
# define _ANIMAL_H__
# include <iostream>

typedef std::string string;

class Animal {
    public:
		Animal ( string type );
        Animal ( void );
        virtual ~Animal ( void );
        Animal ( const Animal & );
        Animal  &operator= ( const Animal & );
		virtual void	makeSound ( void ) const;
		string	getType ( void ) const;
		virtual void	testing( void ) const;
    protected:
        string type;
};

#endif