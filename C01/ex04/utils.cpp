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

void	replaceString( string &bufferRef, string &oldStringRef, string &newStringRef, std::ifstream &infileObj, std::ofstream &outfileObj )
{
	int	stringPosition = 0;
	size_t	idx = 0;

	getline(infileObj, bufferRef);
	std::cout << bufferRef << std::endl;
	while (true)
	{
		stringPosition = bufferRef.find(oldStringRef, idx);
		std::cout << "String position is : " << stringPosition << std::endl;
		if (stringPosition == -1)
			break ;
		bufferRef.erase(stringPosition, oldStringRef.length());
		bufferRef.insert(stringPosition, newStringRef);
		idx = stringPosition + newStringRef.length();
	}
	outfileObj << bufferRef << std::endl;
}
