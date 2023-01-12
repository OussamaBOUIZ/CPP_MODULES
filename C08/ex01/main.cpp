#include <iostream>
#include <vector>
#include <deque>
#include "Span.hpp"

// int main ( void )
// {
// 	try {
// 		Span Numbers(10);

	
// 		Numbers.addNumber(55);
// 		Numbers.addNumber(8);
// 		Numbers.addNumber(1);
// 		// Numbers.addNumber(6);
// 		// Numbers.addNumber(7);
// 		// Numbers.addNumber(17);
// 		// Numbers.addNumber(18);
// 		Numbers.display();
// 		std::cout << "Numbers size : " << Numbers.size() << std::endl;




// 		std::cout << Numbers.shortestSpan() << std::endl;
// 		std::cout << Numbers.longestSpan() << std::endl;
// 	}
// 	catch ( const std::exception& excep) {
// 		std::cerr << excep.what() << std::endl;
// 	}
// 	return (0);
// }

int main ()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}