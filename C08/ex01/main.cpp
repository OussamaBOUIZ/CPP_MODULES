#include <iostream>
#include <vector>
#include <deque>
#include "easyfind.hpp"
#include "easyfind.tpp"

int mainOne ( void )
{
	try {
		std::vector<int> numbers;
		for (size_t i = 0; i < 10; i++)
			numbers.push_back(i * i);
		for (size_t i = 0; i < 10; i++)
			std::cout << numbers[i] << std::endl;
		int	a = easyfind(numbers, 100);
		std::cout << a << std::endl;	
	}
	catch ( const std::exception& excep)
	{
		std::cerr << excep.what() << std::endl;
	}
	return (0);
}

int mainTwo ( void )
{
	try {
		std::deque<int> conversation;
		std::deque<int>::iterator it;

		for (size_t i = 0; i < 5; i++)
			conversation.push_back(i * i);
		for (size_t i = 0; i < 5; i++)
			conversation.push_front(i + i);
		for (it = conversation.begin();
			 it != conversation.end() ;
			 ++it)
			 	std::cout << *it << std::endl;
		int	sentence = easyfind(conversation, 16);
		std::cout << sentence << std::endl;
		int	sentence = easyfind(conversation, 100);
		std::cout << sentence << std::endl;
	}
	catch ( const std::exception& excep) {
		std::cerr << excep.what() << std::endl;
	}
	return (0);
}

int main ( void )
{
	return mainTwo();
}