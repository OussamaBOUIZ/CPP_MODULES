#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>
#include "PhoneBook.hpp"
# define CONTACT_SIZE 8

int	isnumeric(std::string number)
{
	for (int i = 0; number[i]; i++)
		if (!isdigit(number[i]))
			return (0);
	return (1);
}


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
	contacts[index].nickName = line;
	getline(std::cin, line);
	contacts[index].phoneNumber = line;
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

int	PhoneBook::displayContacts(void)
{
	if (contacts[0].firstName.empty())
	{
		std::cout << "PHONEBOOK IS EMPTY" << std::endl;
		return (1);
	}
	for (int i = 0; i < CONTACT_SIZE and !contacts[i].firstName.empty(); i++)
		displaySingleContact(i) ;
	return (0);
}

void	PhoneBook::getContact()
{
	std::string indexFromUser;
	int			index;

	index = 9;
	do
	{
		getline(std::cin, indexFromUser);
		if (indexFromUser == "EXIT") exit(0);
		if (!isnumeric(indexFromUser))
			std::cout << "Please enter a number 😁" << std::endl;
		else
		{
			index = stoi(indexFromUser);
			if (index > lastEmptyElement() or index < 0)
				std::cout << "Please enter a number in this range [0 - "<< lastEmptyElement() - 1 << "] 😁" << std::endl;
			else
				displaySingleContact(index);
		}
	} while (!(index >= 0 and index < lastEmptyElement()));
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
		if (displayContacts())
			return ;
		getContact();
	}
	else
		exit(0);
}