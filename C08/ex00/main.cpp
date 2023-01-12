#include <iostream>
#include <vector>
#include <deque>
#include <stack>
#include "easyfind.hpp"
#include "easyfind.tpp"

//TESTING WITH A VECTOR
int mainOne ( void )
{
	try {
		std::vector<int> numbers;
		for (size_t i = 0; i < 10; i++)
			numbers.push_back(i * i);
		for (size_t i = 0; i < 10; i++)
			std::cout << numbers[i] << std::endl;
		int	value = easyfind(numbers, 16);
		std::cout << "value : " << value << std::endl;
		value = easyfind(numbers, 100);
		std::cout << "value : " << value << std::endl;
	}
	catch ( const std::exception& excep)
	{
		std::cerr << excep.what() << std::endl;
	}
	return (0);
}

//TESTING WITH A DEQUE
int mainTwo ( void )
{
	try {
		std::deque<int> numbers;
		std::deque<int>::iterator it;

		for (size_t i = 0; i < 5; i++)
			numbers.push_back(i * i);
		for (size_t i = 0; i < 5; i++)
			numbers.push_front(i + i);
		for (it = numbers.begin();
			 it != numbers.end() ;
			 ++it)
			 	std::cout << *it << std::endl;
		std::cout << std::endl;
		int	value = easyfind(numbers, 16);
		std::cout << "value : " << value << std::endl;
		// value = easyfind(numbers, 100); // TESTING WITH UNEXISTING ELEMENT
	}
	catch ( const std::exception& excep) {
		std::cerr << excep.what() << std::endl;
	}
	return (0);
}


int main ( void )
{
	return mainOne();
	// return mainTwo();
}