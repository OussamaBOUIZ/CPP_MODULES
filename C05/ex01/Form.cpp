# include "Form.hpp"
/* ----------------------------------------------------- */
/* ------------------    EXCEPTIONS    ----------------- */
/* ----------------------------------------------------- */

class Form::GradeTooHighException: public std::exception {
	public:
		const char	*what() throw() { return ("The Grade is Too High"); } 
};

class Form::GradeTooLowException: public std::exception {
	public:
		const char	*what() throw() { return ("The Grade is Too Low"); } 
};
/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

Form::Form ( string name, int gradeToSign, int gradeToExecute ) 
	: _name(name),
	  _requiredGradeToSign(gradeToSign),
	  _requiredGradeToExecute(gradeToExecute)
{
	_signingState = false;
}

Form::Form ( void )
	: _name("UNNAMED"),
	  _requiredGradeToSign(75),
	  _requiredGradeToExecute(75)
{
	_signingState = false;
}

Form::~Form ( void )
{
	
}

Form	&Form::operator= ( const Form &obj )
{
	return (*this);
}

Form::Form ( const Form &obj )
{	

	*this = obj;
}


/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

const string	Form::getName ( void ) const { return (_name);}
bool			Form::getSigningState ( void ) const { return (_signingState);}
const int		Form::getRequiredGradeToSign ( void ) const { return (_requiredGradeToSign); };
const int		Form::getRequiredGradeToExecute ( void ) const { return (_requiredGradeToExecute); };
void			Form::beSigned( Bureaucrat &aBureaucrat )
{
	if (aBureaucrat.getGrade() <= _requiredGradeToSign )
		_signingState = true;
	else
		throw GradeTooLowException();
}


/* ----------------------------------------------------- */
/* ------------------     OPERATOR     ----------------- */
/* ----------------------------------------------------- */

ostream	&operator<< ( ostream &out, const Form &obj )
{
	std::cout << "Form name : " << obj.getName() << std::endl;
	std::cout << "Form Signing State : " << obj.getSigningState() << std::endl;
	std::cout << "Form Required Grade To Sign : " << obj.getRequiredGradeToSign() << std::endl;
	std::cout << "Form Required Grade To Execute : " << obj.getRequiredGradeToExecute() << std::endl;
	return (out);
}