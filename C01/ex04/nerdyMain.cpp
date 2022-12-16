#include "sed.hpp"

int main( int ac, char **av )
{
	string		 oldString, newString, buffer;
	if (ac != 4)
		{std::cerr << "INVALID ARGUMENTS" << std::endl; return (1);}
	std::ifstream	infileObj(av[1]);
	if (!infileObj)
		{std::cerr << "UNEXISTING FILE" << std::endl; return (1);}
	oldString = string(av[2]);
	newString = string(av[3]);
	std::ofstream	outfileObj(string(av[1]) + ".replace");
	while (getline(infileObj, buffer))
		replaceString(buffer, oldString, newString, outfileObj);
	std::cout << "✅ Nice Check the " + string(av[1]) + ".replace !!!"  << std::endl;
}
