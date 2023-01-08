# include "PresidentialPardonForm.hpp"

/* ----------------------------------------------------- */
/* ------------------    EXCEPTIONS    ----------------- */
/* ----------------------------------------------------- */

class PresidentialPardonForm::GradeTooLowException: public std::exception {
	public:
		const char	*what() const throw() { return ("Too Low Grade"); } 
};

PresidentialPardonForm::PresidentialPardonForm ( string target)
		: Form ("Presidential Pardon Form", 25, 5),
		_target(target)
{
	std::cout << "---           PresidentialPardonForm Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm ( void )
		: Form ("UNNAMED", 25, 5),
		_target("UNNAMED TARGET")
{
	std::cout << "---           PresidentialPardonForm Default Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm ( void )
{
	std::cout << "---           PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm ( const PresidentialPardonForm &obj )
		: Form (obj)
{
	*this = obj;
}


PresidentialPardonForm	&PresidentialPardonForm::operator= ( const PresidentialPardonForm &obj )
{
	if (this == &obj)
		return (*this);
	*this = PresidentialPardonForm(obj);
	return (*this);
}

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

void	PresidentialPardonForm::announcePardon( void ) const
{
	std::cout << _target << " has been pardoned by  Zaphod Beeblebrox" << std::endl;
}

void	PresidentialPardonForm::execute( Bureaucrat const &executor ) const
{
	if (_signingState == false or\
		executor.getGrade() > this->getRequiredGradeToSign())
		throw GradeTooLowException();
	else
		announcePardon();
}