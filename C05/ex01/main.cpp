# include "Bureaucrat.hpp"

// BASIC PAPER MAIN
/*
int	main( void )
{
	try {
		
		Bureaucrat	PublicServant(142, "Public Servant");
		Form		BasicPaper("Basic Paper", 150, 150);

		BasicPaper.beSigned(PublicServant);
		PublicServant.signForm(BasicPaper);
	}
	catch ( const std::exception& excep)
	{
		std::cerr << excep.what() << std::endl;
	}
	return 0;
}
*/

// 

int	main( void )
{
	try {
		Bureaucrat	HighLevelExecutive(5,"Mr. High Level Executive");
		Bureaucrat	departmentHead(75, "Department Head");
		Bureaucrat	assistant(130, "Assistant");
		Form		SummaryReport("Summary Report", 80, 75);
		Form		ProjectProposalAgreement("Project Proposal Agreement", 10, 20);

		// Introducing Individuals
		std::cout << HighLevelExecutive << std::endl;
		std::cout << departmentHead << std::endl;
		std::cout << assistant << std::endl;
		// Introducing Forms
		std::cout << SummaryReport << std::endl;
		std::cout << ProjectProposalAgreement << std::endl;
		//Insertion operator with the Form class
		std::cout << SummaryReport << std::endl;;
		std::cout << assistant << std::endl;
		ProjectProposalAgreement.beSigned(HighLevelExecutive);
		HighLevelExecutive.signForm(ProjectProposalAgreement);
		SummaryReport.beSigned(departmentHead);
		departmentHead.signForm(SummaryReport);
		std::cout << SummaryReport << std::endl;;
		SummaryReport.beSigned(assistant);
		assistant.signForm(SummaryReport);
	}
	catch ( const std::exception& excep )
	{
		std::cerr << excep.what() << std::endl;
	}
	return 0;
}


