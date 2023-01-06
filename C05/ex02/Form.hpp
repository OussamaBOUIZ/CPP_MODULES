#ifndef __FORM_H__
# define __FORM_H__
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

typedef std::string string;
typedef std::ostream ostream;

class	Bureaucrat; // this solves the problem of circular dependency 
// we should a deep look on this one 

class Form {
	public:
		Form ( string name, int gradeToSign, int gradeToExecute );
		Form ( void );
		~Form ( void );
		Form ( const Form & );
		Form	&operator= ( const Form & );
		class	GradeTooHighException;
		class	GradeTooLowException;
		const string	getName ( void ) const;
		bool			getSigningState ( void ) const;
		int		getRequiredGradeToSign ( void ) const;
		virtual int		getRequiredGradeToExecute ( void ) const = 0;
		void			beSigned( Bureaucrat & );
	protected:
		const string	_name;
		bool			_signingState;
		const int		_requiredGradeToSign;
		const int		_requiredGradeToExecute;
};

ostream	&operator<< ( ostream &out, const Form &obj );

#endif