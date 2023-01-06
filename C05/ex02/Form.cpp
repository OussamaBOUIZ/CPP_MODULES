# include "Form.hpp"

/* ----------------------------------------------------- */
/* ------------------    EXCEPTIONS    ----------------- */
/* ----------------------------------------------------- */



/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

Form::Form ( string name, int gradeToSign, int gradeToExecute ) 
	: _name(name),
	  _requiredGradeToSign(gradeToSign),
	  _requiredGradeToExecute(gradeToExecute)
{
	std::cout << "---           Form Constructor called" << std::endl;
	_signingState = false;
}

Form::Form ( void )
	: _name("UNNAMED"),
	  _requiredGradeToSign(75),
	  _requiredGradeToExecute(75)
{
	std::cout << "---           Form Default Constructor called" << std::endl;
	_signingState = false;
}

Form::~Form ( void ) {}

Form::Form ( const Form &obj )
		:	_name(obj._name),
			_requiredGradeToSign(obj._requiredGradeToSign),
			_requiredGradeToExecute(obj._requiredGradeToExecute)
{
	// std::cout << "---           Form Copy Constructor called" << std::endl;
	// _signingState = obj._signingState;	
	// *this = obj;
}

// Form	&Form::operator= ( const Form &obj )
// {
// 	std::cout << "---           Form Assignment Operator called" << std::endl;
// 	if (this == &obj)
// 		return (*this);
// 	*this = Form(obj);
// 	return (*this);
// }


/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

const string	Form::getName ( void ) const { return (_name);}
bool			Form::getSigningState ( void ) const { return (_signingState);}
int				Form::getRequiredGradeToSign ( void ) const { return (_requiredGradeToSign); };
int				Form::getRequiredGradeToExecute ( void ) const { return (_requiredGradeToExecute); };


void			Form::beSigned( Bureaucrat &aBureaucrat )
{
	if (aBureaucrat.getGrade() <= _requiredGradeToSign )
		_signingState = true;
	else
		throw lowException;
}


/* ----------------------------------------------------- */
/* ------------------     OPERATOR     ----------------- */
/* ----------------------------------------------------- */

ostream	&operator<< ( ostream &out, const Form &obj )
{
	std::cout << "Form name : " << obj.getName() << std::endl;
	std::cout << "Form Signing State : " << (obj.getSigningState() ? "SIGNED" : "UNSIGNED") << std::endl;
	std::cout << "Form Required Grade To Sign : " << obj.getRequiredGradeToSign() << std::endl;
	std::cout << "Form Required Grade To Execute : " << obj.getRequiredGradeToExecute();
	return (out);
}