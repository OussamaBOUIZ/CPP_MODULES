#ifndef __INTERN_H__
# define __INTERN_H__
# include "Form.hpp"


class Intern {
	public:
		Intern ( void );
		~Intern ( void );
		Intern ( const Intern & );
		Intern	&operator= ( const Intern & );
		Form	*makeForm ( string, string );
};

#endif