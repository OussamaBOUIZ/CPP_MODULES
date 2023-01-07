# include "Intern.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

Intern::Intern ( void ) {}
Intern::~Intern ( void ) {}

Intern	&Intern::operator= ( const Intern &obj )
{
	(void)obj;
	return (*this);
}

Intern::Intern ( const Intern &obj )
{
	*this = obj;
}

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */
void	free_uneccessary(Form *arr[], size_t idx)
{
	for (size_t i = 0; i < 3; i++)
		if (i != idx)
			delete arr[i];
}

Form	*Intern::makeForm ( string formName, string targetForm )
{
	string	PossibleForms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	try {
		Form	*PtrToForms[3] = {new ShrubberyCreationForm(targetForm), 
								  new RobotomyRequestForm(targetForm),
								  new PresidentialPardonForm(targetForm)};

		for (size_t i = 0; i < 3; i++) {
			if ( formName == PossibleForms[i]) {
				std::cout << "Intern creates " << PossibleForms[i] << std::endl;
				free_uneccessary(PtrToForms, i);
				return 	(PtrToForms[i]); 
			}
		}
		free_uneccessary(PtrToForms, 4);
		std::cout << "---- INVALID FORM NAME" << std::endl;
	}
	catch ( const std::bad_alloc& excep)
	{
		std::cerr << "Memory Allocation Failed : " << excep.what() << std::endl;
	}
	return (nullptr);
}