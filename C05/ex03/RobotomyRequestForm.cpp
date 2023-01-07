# include "RobotomyRequestForm.hpp"
# include <cstdlib>
/* ----------------------------------------------------- */
/* ------------------    EXCEPTIONS    ----------------- */
/* ----------------------------------------------------- */

class RobotomyRequestForm::GradeTooLowException: public std::exception {
	public:
		const char	*what() const throw() { return ("To Be Determined"); } 
};


/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

RobotomyRequestForm::RobotomyRequestForm ( string target)
			: Form ("Roboto my Request Form", 72, 45),
			_target(target)
{
	std::cout << "---           RobotomyRequestForm Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm ( void )
			: Form ("UNNAMED FORM", 72, 45),
			_target("UNNAMED TARGET")
{
	std::cout << "---           RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm ( void )
{
	std::cout << "---           RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm ( const RobotomyRequestForm &obj )
			: Form (obj)
{
	*this = obj;
}

RobotomyRequestForm	&RobotomyRequestForm::operator= ( const RobotomyRequestForm &obj )
{
	//check self-assignment
	if (this == &obj)
		return (*this);
	*this = RobotomyRequestForm(obj);
	return (*this);
}

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

void	RobotomyRequestForm::robotomize( void ) const
{
	std::cout << "Drilling Noises 💥💥" << std::endl;
	int randomNumber = rand();
	if (randomNumber % 2)
		std::cout << _target << " has been robotomized successfully ✅" << std::endl;
	else
		std::cout << "The robotomy failed ❌" << std::endl;
}

void	RobotomyRequestForm::execute( Bureaucrat const &executor ) const
{
	if (_signingState == false or\
		executor.getGrade() > this->getRequiredGradeToSign())
		throw GradeTooLowException();
	else
		robotomize();
}
