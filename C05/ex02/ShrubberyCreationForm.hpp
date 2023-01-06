#ifndef __SHRUBBERYCREATIONFORM_H__
# define __SHRUBBERYCREATIONFORM_H__
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm ( string, string );
		ShrubberyCreationForm ( void );
		~ShrubberyCreationForm ( void );
		ShrubberyCreationForm ( const ShrubberyCreationForm & );
		ShrubberyCreationForm	&operator= ( const ShrubberyCreationForm & );
	private:
		string	_target;
};


#endif