# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

// Testing ShrubberyCreationForm by Public Servants
/*
int	main( void )
{
	try {
		Bureaucrat				PublicServant(140, "Mr Happy");
		Bureaucrat				HighPublicServant(136, "Mr VeryHappy");
		ShrubberyCreationForm	GardeningReport("Incorporation_Backyard");

		GardeningReport.beSigned(PublicServant);
		std::cout << GardeningReport << std::endl;
		PublicServant.signForm(GardeningReport);
		HighPublicServant.executeForm(GardeningReport);
		std::cout << PublicServant << std::endl;
		std::cout << HighPublicServant << std::endl;
	}
	catch ( const std::exception& excep)
	{
		std::cerr << excep.what() << std::endl;
	}
	return 0;
}
// Testing RobotomyRequestForm

int	main( void )
{
	try {
		Bureaucrat			DepartmentViceCEO(60, "Mr Issam");
		Bureaucrat			DepartmentCEO(35, "Issam's Dad");
		RobotomyRequestForm	MaintenanceProposal("Sales_Section_Floor");

		MaintenanceProposal.beSigned(DepartmentViceCEO);
		std::cout << MaintenanceProposal << std::endl;	
		DepartmentViceCEO.signForm(MaintenanceProposal);
		DepartmentCEO.executeForm(MaintenanceProposal);
		std::cout << DepartmentViceCEO << std::endl;
		std::cout << DepartmentCEO << std::endl;
	}
	catch ( const std::exception& excep)
	{
		std::cerr << excep.what() << std::endl;
	}
	return 0;
}

*/
// TESTING PresidentialPardonForm

int main ( void )
{
	try {
		Bureaucrat				VicePresident(10, "Mr Vice President");
		Bureaucrat				President(4, "President");
		Bureaucrat				UnresponsibleEmployee(133, "Mr Unresponsible");

		PresidentialPardonForm	ForgivenessForm(UnresponsibleEmployee.getName());

		ForgivenessForm.beSigned(VicePresident);
		std::cout << ForgivenessForm << std::endl;
		VicePresident.signForm(ForgivenessForm);
		President.executeForm(ForgivenessForm);
		std::cout << VicePresident << std::endl;
		std::cout << President << std::endl;
			
	}
	catch ( const std::exception& excep)
	{
		std::cerr << excep.what() << std::endl;
	}
	throw GradeTooHighException();
	return (0);
}


