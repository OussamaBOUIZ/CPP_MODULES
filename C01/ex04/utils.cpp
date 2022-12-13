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

void	replaceString( string &bufferRef, string oldString )
{
	size_t	stringPosition = 0;
	size_t	idx = 0;

	std::cout << "I enter here" << std::endl;
	getline(std::cin, bufferRef);
	std::cout << bufferRef << std::endl;
	while (not (stringPosition == -1))
	{
		std::cout << "here" << std::endl;
		stringPosition = bufferRef.find(oldString, idx);
		std::cout << "String position is : " << stringPosition << std::endl;
		bufferRef.erase(stringPosition, oldString.length());
		idx = stringPosition;
	}
}
