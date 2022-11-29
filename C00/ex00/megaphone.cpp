#include <iostream>
#include <cctype>
#include <string>

void	strToUpper(char *str)
{
	for (int i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
}

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		strToUpper(av[i]);
		std::cout << av[i] << " ";
	}
	std::cout << std::endl;
	return (0);
}

// LET'S NOW REMAKE THIS PROBLEM IN A C++ MANNER
