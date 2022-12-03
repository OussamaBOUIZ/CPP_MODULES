#include "PhoneBook.hpp"

int	isnumeric(std::string number)
{
	for (int i = 0; number[i]; i++)
		if (!isdigit(number[i]))
			return (0);
	return (1);
}

void	printField(std::string field)
{
	std::cout << std::setw(10);
	if (field.length() > 10)
	{
		field = field.substr(0, 10);
		field[9] = '.';
	}
	std::cout << field;
}

std::string	getValidInput(std::string fieldName)
{
	std::string validInput;
	do
	{
		std::cout << "Enter " << fieldName<< " : ";
		getline(std::cin, validInput);
		if (!validInput.empty())
			return (validInput);
		else
			continue;
	}
	while (true);
}