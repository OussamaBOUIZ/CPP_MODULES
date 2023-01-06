# include "ShrubberyCreationForm.hpp"

/* ----------------------------------------------------- */
/* ------------------    EXCEPTIONS    ----------------- */
/* ----------------------------------------------------- */


class ShrubberyCreationForm::GradeTooLowException: public std::exception {
	public:
		const char	*what() const throw() { return ("To Be Determined"); } 
};

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

ShrubberyCreationForm::ShrubberyCreationForm ( string target)
			: Form("Shrubbery Creation Form", 145, 137),
			  _target(target)
{
	std::cout << "---           ShrubberyCreationForm Default Constructor called" << std::endl;
	_signingState = false;
}

ShrubberyCreationForm::ShrubberyCreationForm ( void )
			: Form(),
			  _target("File")
{
	std::cout << "---           ShrubberyCreationForm Default Constructor called" << std::endl;
	_signingState = false;
}

ShrubberyCreationForm::~ShrubberyCreationForm ( void )
{
	std::cout << "---           ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm ( const ShrubberyCreationForm &obj )
			: Form(obj)
{
	*this = obj;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator= ( const ShrubberyCreationForm &obj )
{
	if (this == &obj)
		return (*this);
	*this = ShrubberyCreationForm(obj);
	return (*this);
}

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */


void	ShrubberyCreationForm::makeShrubbery ( void ) const
{
	std::ofstream	place;

	place.open(_target + "_shrubbery");
	place << "    ^   " << std::endl;	
	place << "   / \\  " << std::endl;	
	place << "  /   \\  " << std::endl;	
	place << " /     \\  " << std::endl;	
	place << " -------  " << std::endl;	
	place << "   | |  " << std::endl;	
	place << ".........  " << std::endl;	
}

void	ShrubberyCreationForm::execute( Bureaucrat const &executor ) const
{
	if (_signingState == false or\
		executor.getGrade() > this->getRequiredGradeToSign())
		throw GradeTooLowException();
	else
		makeShrubbery();
}