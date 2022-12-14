#include "sed.hpp"

int main( void )
{
	string			infileName, oldString, newString, buffer;
	std::ifstream	infileObj;
	std::ofstream	outfileObj;
	getValidInfile(infileName, infileObj);
	outfileObj.open(infileName + ".replace");
	oldString = getValidString("s1");
	newString = getValidString("s2");
	while (getline(infileObj, buffer))
		replaceString(buffer, oldString, newString, outfileObj);
	std::cout << "👍 Nice Check the " + infileName + ".replace !!!"  << std::endl;
	return (0);
}
