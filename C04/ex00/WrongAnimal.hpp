#ifndef __WRONGANIMAL_H__
# define __WRONGANIMAL_H__
# include <iostream>

typedef std::string string;

class WrongAnimal {
	public:
		WrongAnimal ( void );
		~WrongAnimal ( void );
		WrongAnimal ( const WrongAnimal & );
		WrongAnimal	&operator= ( const WrongAnimal & );
		void	makeSound ( void ) const ;
		string	getType ( void ) const;
	protected:
		string type;
};

#endif