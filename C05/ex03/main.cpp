# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "Intern.hpp"

int	main( void )
{
	Intern	newIntern;

	Form *formByIntern = newIntern.makeForm("Shrubb eryCreationForm", "Blender");
	if (formByIntern != nullptr)
		std::cout << *formByIntern << std::endl;
	system("leaks internship");
	return 0;
}