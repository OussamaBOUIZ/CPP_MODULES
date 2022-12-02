#include <string>

int	isnumeric(std::string number)
{
	for (int i = 0; number[i]; i++)
		if (!isdigit(number[i]))
			return (0);
	return (1);
}