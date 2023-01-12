#include <iostream>
#include <vector>
#include <deque>
#include "Span.hpp"
// TESTING WITH SUBJECT MAIN
int mainSubject ( void )
{
	Span	mySpan = Span(5);

	mySpan.addNumber(6);
	mySpan.addNumber(3);
	mySpan.addNumber(17);
	mySpan.addNumber(9);
	mySpan.addNumber(11);

	std::cout <<  mySpan.shortestSpan() << std::endl;
	std::cout <<  mySpan.longestSpan() << std::endl;
	return (0);
}

//TESTING WITH A BIG SIZE
# define MAX_SIZE 100000
int mainOne ( void )
{
	Span mySpan(MAX_SIZE);

	for (unsigned int i = 0; i < MAX_SIZE ; i++)
		mySpan.addNumber(rand());
	mySpan.display();
	std::cout << std::endl;
	std::cout <<  mySpan.shortestSpan() << std::endl;
	std::cout <<  mySpan.longestSpan() << std::endl;
	return (0);
}

//EXCEEDING THE SIZE
# define SIZE 256
int mainTwo ( void )
{
	try {
		Span	mySpan(SIZE);

		for (unsigned int i = 0; i < SIZE + 1; i++)
			mySpan.addNumber(rand());
		std::cout <<  mySpan.shortestSpan() << std::endl;
		std::cout <<  mySpan.longestSpan() << std::endl;
	}
	catch ( const std::exception& excep) {
		std::cerr << excep.what() << std::endl;
	}
	return (0);
}

//ADDING BUNCH OF MEMBERS AT ONCE
# define RANDSIZE 26
int mainThree ( void )
{
	Span mySpan(SIZE);

	std::vector<unsigned int> manyNumbers;
	for (unsigned int i = 0; i < RANDSIZE ; i++)
		manyNumbers.push_back(rand());
	mySpan.addListOfNumbers(manyNumbers);
	mySpan.display();
	std::cout << std::endl;
	std::cout <<  mySpan.shortestSpan() << std::endl;
	std::cout <<  mySpan.longestSpan() << std::endl;
	return (0);
}

int main ( void )
{
	return mainSubject();
	// return mainOne();
	// return mainTwo(); // Container is Full
	// return mainThree();
}