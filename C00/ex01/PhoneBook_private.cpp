#include "PhoneBook.hpp"

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
	int			idx;

	idx = orderOfNextContact % 8;
	contacts[idx].firstName = getValidInput("First Name");
	contacts[idx].lastName = getValidInput("Last Name");
	contacts[idx].nickName = getValidInput("Nick Name");
	contacts[idx].phoneNumber = getValidInput("Phone Number");
	contacts[idx].darkestSecret = getValidInput("Darkest Secret");
	orderOfNextContact++;
}

void	PhoneBook::displaySingleContact(int index)
{
	std::cout << std::setw(10);
	std::cout << index + 1;
	std::cout << "|";
	std::cout << std::setw(10);
	printField(contacts[index].firstName);
	std::cout << "|";
	std::cout << std::setw(10);
	printField(contacts[index].lastName);
	std::cout << "|";
	std::cout << std::setw(10);
	printField(contacts[index].nickName);
	std::cout << "|";
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

void	PhoneBook::displayAllContactField(int index)
{
	std::cout << "First name: " << contacts[index].firstName << std::endl;
	std::cout << "Last  name: " << contacts[index].lastName << std::endl;
	std::cout << "Nick  name: " << contacts[index].nickName << std::endl;
	std::cout << "Phone Number: " << contacts[index].phoneNumber << std::endl;
	std::cout << "Darkest Address: " << contacts[index].darkestSecret << std::endl;
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
		if (!isnumeric(indexFromUser) or indexFromUser.empty())
			std::cout << "Please enter a number 😁" << std::endl;
		else
		{
			index = stoi(indexFromUser);
			index--;
			if (index >= lastEmptyElement() or index < 0)
				std::cout << "Please enter a number in this range [1 - "<< lastEmptyElement() << "] 😁" << std::endl;
			else
				displayAllContactField(index);
		}
	} while (!(index >= 0 and index < lastEmptyElement()));
}