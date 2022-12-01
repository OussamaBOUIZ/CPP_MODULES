#include "PhoneBook.hpp"

int x = 100;
int	main(void)
{
	/*
		The program should prompt the user to enter one of this command (ADD, SEARCH, EXIT)
		The function responsible for this would be a member function of the class PhoneBook
		so first we'll have to instantiate our PhoneBook.
	*/
	PhoneBook	awesomePhoneBook;
	std::string command = awesomePhoneBook.promptUser();
	awesomePhoneBook.executeCommand(command);
	return (0);
}
