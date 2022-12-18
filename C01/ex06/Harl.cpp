#include "Harl.hpp"

int	indexOf(string *arrOfStrings, int n, string toFind)
{
	int i = 0;
	while (i < n)
	{
		if (toFind == arrOfStrings[i])
			return (i);
		i++;
	}
	return (-1);
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my"
	" 7XL-double-cheese-triple-pickle-special-ketchup"
	" burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << 
	"I cannot believe adding extra bacon costs more money."
	" You didn’t putenough bacon in my burger! If you did," 
	" I wouldn’t be asking for more!"
	 << std::endl;
	 std::cout << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon" 
	" for free. I’ve been coming foryears whereas you started"
	" working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::complain( string level )
{
	string s[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	levelIndex;

	levelIndex = indexOf(s, 4, level);
	switch (levelIndex)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		case -1:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}