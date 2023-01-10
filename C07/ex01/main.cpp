#include <iostream>
# include "iter.hpp"
typedef std::string string;

void	printInt( int & );
void	printFloat( float & );
void	printChar( char & );
void	printString( string & );

// Basic Printing
int mainOne ( void )
{
	// Testing with an array of integers;
	int intArray[3] = {4, 5, 6};
	iter(intArray, 3, printInt);

	std::cout << "\t\t---------------------\n" << std::endl;
	// Testing with an array of floats;
	float flaotArray[3] = {4.45f, 5.3f, 6.21f};
	iter(flaotArray, 3, printFloat);

	std::cout << "\t\t---------------------\n" << std::endl;
	// Testing with an array of char;
	char charArray[3] = {'A', 'B', 'C'};
	iter(charArray, 3, printChar);

	std::cout << "\t\t---------------------\n" << std::endl;
	// Testing with an array of strings;
	string stringsArray[3] = {"apple", "kiwi", "pineapple"};
	iter(stringsArray, 3, printString);

	return (0);
}

void	doubleInt ( int & );
void	doubleFloat ( float & );

//Writing on arrays
int mainTwo ( void )
{
	// Testing with an array of integers;
	int intArray[3] = {4, 5, 6};
	iter(intArray, 3, doubleInt);
	iter(intArray, 3, printInt);

	std::cout << "\t\t---------------------\n" << std::endl;
	// Testing with an array of floats
	float floatArray[3] = {2.42f, 3.14f, 8.21f};
	iter(floatArray, 3, doubleFloat);
	iter(floatArray, 3, printFloat);
	return (0);
}

// MAIN MAIN
int main ( void )
{
	return mainOne();
}

/* ----------------------------------------------------- */
/* ------------------ FUNCTIONS IMPLEM ----------------- */
/* ----------------------------------------------------- */
void	printInt(int &i)
{
	std::cout << "value : " << i << std::endl;
}

void	printFloat(float &f)
{
	std::cout << "value : " << f << std::endl;
}

void	printChar(char &c)
{
	std::cout << "value : " << c << std::endl;
}

void	printString(string &s)
{
	std::cout << "value : " << s << std::endl;
}

void	doubleInt ( int & element )
{
	element *= 2;
}

void	doubleFloat ( float & element )
{
	element *= 2;
}
