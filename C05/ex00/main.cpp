# include "Bureaucrat.hpp"

// CONSTRUCTING AN INVALID BUREAUCRAT
int	main()
{
	try {
		Bureaucrat	AnotherInvalidBureaucrat(-50, "Impossibly High Servant");	
		Bureaucrat	InvalidBureaucrat(400, "Low Servant");	
	}
	catch ( const GradeTooLowException& excep)
	{
		std::cerr << excep.what() << std::endl;
	}
	catch ( const GradeTooHighException& excep)
	{
		std::cerr << excep.what() << std::endl;
	}
	return 0;
}
/*
// MAIN TO TRY INCREMENTING
int main ( void )
{
	try {
		Bureaucrat	SamPublicServant(3, "Sam");	
		std::cout << SamPublicServant << std::endl;
		SamPublicServant.incrementGrade();
		SamPublicServant.incrementGrade();
		SamPublicServant.incrementGrade();
	}
	catch ( const std::exception& excep)
	{
		std::cerr << excep.what() << std::endl;
	}
	return (0);
}
// MAIN TO TRY DECREMENTING
int main ( void )
{
	try {
		Bureaucrat LahbibAdministrator(148, "Lahbib");
		std::cout << LahbibAdministrator << std::endl;
		LahbibAdministrator.decrementGrade();
		LahbibAdministrator.decrementGrade();
		LahbibAdministrator.decrementGrade();
	}
	catch ( const std::exception& excep)
	{
		std::cerr << excep.what() << std::endl;
	}
	return (0);
}
*/



