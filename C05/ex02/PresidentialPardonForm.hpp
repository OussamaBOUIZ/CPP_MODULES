#ifndef __PRESIDENTIALPARDONFORM_H__
# define __PRESIDENTIALPARDONFORM_H__
# include "Form.hpp"

class PresidentialPardonForm: public Form {
	public:
		PresidentialPardonForm ( string );
		PresidentialPardonForm ( void );
		~PresidentialPardonForm ( void );
		PresidentialPardonForm ( const PresidentialPardonForm & );
		PresidentialPardonForm	&operator= ( const PresidentialPardonForm & );
		void	execute( Bureaucrat const &executor ) const;
		void	announcePardon ( void ) const;
		class	GradeTooHighException;
		class	GradeTooLowException;
	private:
		string	_target;
};

#endif