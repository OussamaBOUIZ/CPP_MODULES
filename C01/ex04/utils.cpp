#include "sed.hpp"

void	getValidInfile(string &fileNameRef, std::ifstream &infileObjRef)
{
	do
	{
		std::cout << "Enter a valid filename : ";
		getline(std::cin, fileNameRef);
		infileObjRef.open(fileNameRef);
	} while (!infileObjRef);
}


string	getValidString(string	order)
{
	string	word;
	do
	{
		std::cout << "Enter a " +  order + " : ";
		getline(std::cin, word);
	} while (word.empty());
	return (word);
}

void	replaceString( string &bufferRef, string &oldStringRef, string &newStringRef, std::ofstream &outfileObj )
{
	size_t	stringPosition = 0;
	size_t	idx = 0;

	std::cout << bufferRef << std::endl;
	while (true)
	{
		stringPosition = bufferRef.find(oldStringRef, idx);
		if (stringPosition == string::npos)
			break ;
		bufferRef.erase(stringPosition, oldStringRef.length());
		bufferRef.insert(stringPosition, newStringRef);
		idx = stringPosition + newStringRef.length();
	}
	outfileObj << bufferRef << std::endl;
}
