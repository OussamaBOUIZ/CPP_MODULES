#ifndef __FORM_H__
# define __FORM_H__
# include <iostream>
# include "Bureaucrat.hpp"

typedef std::string string;
typedef std::ostream ostream;

class Form {
	public:
		Form::Form ( string name, int gradeToSign, int gradeToExecute );
		Form ( void );
		~Form ( void );
		Form ( const Form & );
		Form	&operator= ( const Form & );
		class	GradeTooHighException;
		class	GradeTooLowException;
		const string	getName ( void ) const;
		bool			getSigningState ( void ) const;
		const int		getRequiredGradeToSign ( void ) const;
		const int		getRequiredGradeToExecute ( void ) const;
		void			beSigned( Bureaucrat & );

	private:
		const string	_name;
		bool			_signingState;
		const int		_requiredGradeToSign;
		const int		_requiredGradeToExecute;
};

ostream	&operator<< ( ostream &out, const Form &obj );

#endif