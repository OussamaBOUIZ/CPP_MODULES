#include "PhoneBook.hpp"

std::string PhoneBook::promptUser(void)
{
	std::string	line;
	while (true)
	{
		std::cout << "---ENTER ONE OF THESE [ADD, SEARCH or EXIT]---" << std::endl;
		getline(std::cin, line);
		if (line == "ADD" or line == "SEARCH" or line == "EXIT")
			return (line);
	}
}

void	PhoneBook::executeCommand(std::string command)
{
	if (command == "ADD")
		addContact();
	else if (command == "SEARCH")
	{
		if (displayContacts())
			return ;
		getContact();
	}
	else
		exit(0);
}

PhoneBook::PhoneBook(void)
{
	orderOfNextContact = 0;
}

