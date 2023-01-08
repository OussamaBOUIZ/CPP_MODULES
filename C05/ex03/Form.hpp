#ifndef __FORM_H__
# define __FORM_H__
# include <iostream>
# include <exception>

typedef std::string string;
typedef std::ostream ostream;

class	Bureaucrat; 

class GradeTooHighException: public std::exception {
	public:
		const char	*what() const throw();
};

class GradeTooLowException: public std::exception {
	public:
		const char	*what() const throw();
};
# include "Bureaucrat.hpp"

class Form {
	public:
		Form ( string name, int gradeToSign, int gradeToExecute );
		Form ( void );
		virtual ~Form ( void );
		Form ( const Form & );
		Form	&operator= ( const Form & );
		GradeTooHighException	highException;
		GradeTooLowException	lowException;
		const string	getName ( void ) const;
		bool			getSigningState ( void ) const;
		int				getRequiredGradeToSign ( void ) const;
	    int				getRequiredGradeToExecute ( void ) const;
		void			beSigned( Bureaucrat & );
		virtual void	execute( Bureaucrat const & ) const = 0;
	protected:
		const string	_name;
		bool			_signingState;
		const int		_requiredGradeToSign;
		const int		_requiredGradeToExecute;
};

ostream	&operator<< ( ostream &out, const Form &obj );

#endif