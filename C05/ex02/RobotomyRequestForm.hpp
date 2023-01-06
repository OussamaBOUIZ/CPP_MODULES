#ifndef __ROBOTOMYREQUESTFORM_H__
# define __ROBOTOMYREQUESTFORM_H__
# include "Form.hpp"

class RobotomyRequestForm: public Form {
	public:
		RobotomyRequestForm ( string );
		RobotomyRequestForm ( void );
		~RobotomyRequestForm ( void );
		RobotomyRequestForm ( const RobotomyRequestForm & );
		RobotomyRequestForm	&operator= ( const RobotomyRequestForm & );
		class	GradeTooHighException;
		class	GradeTooLowException;
		void	robotomize ( void ) const;
		void	execute( Bureaucrat const &executor ) const;
	private:
		string	_target;
};

#endif