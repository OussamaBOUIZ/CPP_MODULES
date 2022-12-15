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
	std::cout << "I love having extra bacon for my"
	" 7XL-double-cheese-triple-pickle-special-ketchup"
	" burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << 
	"I cannot believe adding extra bacon costs more money."
	" You didn’t putenough bacon in my burger! If you did," 
	" I wouldn’t be asking for more!"
	 << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon" 
	" for free. I’ve been coming foryears whereas you started"
	" working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( string level )
{
	// std::cout << level << std::endl;
	// (void	(Harl::*)( void )) ptrArr[4];
	string s[] = {"debug", "info", "warning", "error"};
	ptrFunc	pointerFunctionsArray[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	(this->*pointerFunctionsArray[indexOf(s, 4, level)])();
}