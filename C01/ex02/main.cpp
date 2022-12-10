#include <iostream>

int	main()
{
	std::string greet = "HI THIS IS BRAIN";
	std::string &stringREF = greet;
	std::string *stringPTR = &greet;
	//PRINTING ADDRESSES;
	std::cout << "The memory address of the string variable : "<< &greet << std::endl;
	std::cout << "The memory address held by stringPTR : "<< stringPTR<< std::endl;
	std::cout << "The memory address held by stringREF : "<< &stringREF << std::endl;

	//PRINTING VALUES
	std::cout << "greet : " << greet << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;
	return 0;
}