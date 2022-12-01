#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>
#include "PhoneBook.hpp"
# define CONTACT_SIZE 8

int	PhoneBook::lastEmptyElement(void)
{
	int	i;

	i = -1;
	while (++i < 8)
		if (contacts[i].firstName.empty())
			return (i);
	return (i);
}

void	PhoneBook::addContact(void)
{
	// Now we'll make this function just print the entry it gets	
	std::string line;
	int			index;

	index = lastEmptyElement();
	getline(std::cin, line);
	contacts[index].firstName = line;
	getline(std::cin, line);
	contacts[index].lastName = line;
	getline(std::cin, line);
	contacts[index].phoneNumber = line;
	// getline(std::cin, line);
	// contacts[index].nickName = line;
	getline(std::cin, line);
	contacts[index].darkestSecret = line;
}

void	PhoneBook::displaySingleContact(int index)
{
	std::cout << std::setw(10);
	std::cout << index;
	std::cout << " |";
	std::cout << std::setw(10);
	std::cout << contacts[index].firstName;
	std::cout << " |";
	std::cout << std::setw(10);
	std::cout << contacts[index].lastName;
	std::cout << " |";
	std::cout << std::setw(10);
	std::cout << contacts[index].nickName;
	std::cout << " |";
	std::cout << std::endl;
}

void	PhoneBook::displayContacts(void)
{
	if (contacts[0].firstName.empty())
		std::cout << "PHONEBOOK IS EMPTY" << std::endl;
	for (int i = 0; i < CONTACT_SIZE and !contacts[i].firstName.empty(); i++)
		displaySingleContact(i) ;
}

void	PhoneBook::getContact()
{
	std::string index;

	getline(std::cin, index);
	displaySingleContact(stoi(index));
}

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
		displayContacts();
		getContact();
	}
	else
		exit(0);
}