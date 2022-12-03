#include "PhoneBook.hpp"

int	main(void)
{
	/*
		The program should prompt the user to enter one of this command (ADD, SEARCH, EXIT)
		The function responsible for this would be a member function of the class PhoneBook
		so first we'll have to instantiate our PhoneBook.
	*/
	PhoneBook	awesomePhoneBook = PhoneBook();
	// We'll be prompting the use as long as he doesn't type EXIT
	while (true)
	{
		std::string command = awesomePhoneBook.promptUser();
		awesomePhoneBook.executeCommand(command);
		std::cout << "----------------" << std::endl;
	}
	return (0);
}