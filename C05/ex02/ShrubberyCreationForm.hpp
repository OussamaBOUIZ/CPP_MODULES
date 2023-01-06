#ifndef __SHRUBBERYCREATIONFORM_H__
# define __SHRUBBERYCREATIONFORM_H__
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm ( string );
		ShrubberyCreationForm ( void );
		~ShrubberyCreationForm ( void );
		ShrubberyCreationForm ( const ShrubberyCreationForm & );
		ShrubberyCreationForm	&operator= ( const ShrubberyCreationForm & );
		void	makeShrubbery ( void ) const;
		void	execute( Bureaucrat const &executor ) const;
		class	GradeTooHighException;
		class	GradeTooLowException;
	private:
		string	_target;
};

#endif