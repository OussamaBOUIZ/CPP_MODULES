#include "sed.hpp"

int main( int ac, char **av )
{
	string		 oldString, newString, buffer;
	if (ac != 4)
	{
		std::cerr << "INVALID ARGUMENTS" << std::endl;
		std::cerr << "PASS RESPECTIVELY A FILENAME, AND TWO STRINGS" << std::endl;
		return (1);
	}
	std::ifstream	infileObj(av[1]);
	if (!infileObj)
		{std::cerr << "INVALID FILENAME" << std::endl; return (1);}
	oldString = string(av[2]);
	newString = string(av[3]);
	if (oldString.empty()) {std::cerr << "S1 EMPTY STRING" << std::endl; return (1);}
	std::ofstream	outfileObj(string(av[1]) + ".replace");
	while (getline(infileObj, buffer))
		replaceString(buffer, oldString, newString, outfileObj);
	std::cout << "✅ Nice Check the " + string(av[1]) + ".replace !!!"  << std::endl;
}
