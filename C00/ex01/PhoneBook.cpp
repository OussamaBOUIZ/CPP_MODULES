#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>
#include "PhoneBook.hpp"
# define CONTACT_SIZE 8

void	PhoneBook::addContact(void)
{
	// Now we'll make this function just print the entry it gets	
	std::cout << "Adding Contact..." << std::endl;
}

void	PhoneBook::displaySingleContact(Contact contact, int index)
{
	std::cout << std::setw(10);
	std::cout << index;
	std::cout << " |";
	std::cout << std::setw(10);
	std::cout << contact.firstName;
	std::cout << " |";
	std::cout << std::setw(10);
	std::cout << contact.lastName;
	std::cout << " |";
	std::cout << std::setw(10);
	std::cout << contact.nickName;
	std::cout << " |";
	std::cout << std::endl;
}

void	PhoneBook::displayContacts(void)
{
	for (int i = 0; i < CONTACT_SIZE and !contacts[i].firstName.empty(); i++)
		displaySingleContact(contacts[i], i) ;
}
void	PhoneBook::getContact(void)
{
	std::cout << "getting contact" << std::endl;
}

std::string PhoneBook::promptUser(void)
{
	std::string	line;

	while (true)
	{
		std::cout << "ENTER ONE OF THESE [ADD, SEARCH or EXIT]" << std::endl;
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
		displayContacts();
		getContact();
	}
	else
		exit(0);
}