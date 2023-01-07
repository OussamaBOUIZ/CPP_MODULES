#ifndef __FORM_H__
# define __FORM_H__
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

typedef std::string string;
typedef std::ostream ostream;

class	Bureaucrat; // this solves the problem of circular dependency 
// we should a deep look on this one 

class GradeTooHighException: public std::exception {
	public:
		const char	*what() const throw() { return ("The Grade is Too High to Sign the Form"); } 
};

class GradeTooLowException: public std::exception {
	public:
		const char	*what() const throw() { return ("The Grade is Too Low to Sign The Form"); } 
};

class Form {
	public:
		Form ( string name, int gradeToSign, int gradeToExecute );
		Form ( void );
		virtual ~Form ( void );
		// Form ( const Form & );
		// Form	&operator= ( const Form & );
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