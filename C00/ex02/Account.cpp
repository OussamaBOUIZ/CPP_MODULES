#include "Account.hpp"
#include <iostream>

/*
	Your first task is to recreate  a lost file.
	Ah Okay, so know we have the following files which are: Account.hpp, tests.cpp and file.log
	the missing piece is the Account.cpp in which resides the implementation of the Account Class
	So I'll have to figure out how to fix this loss of the file
	We could use the log file in order to understand how the Account class was implemented.
*/

// *** OK LET'S UNDERSTAND FIRST THE MAIN IN test.cpp

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
}

Account::~Account( void )
{
	return ;
}

void	Account::displayStatus(void) const
{
	bool fact;

	fact = true;
	if (fact)
		std::cout << "created ";
	else
		std::cout << "refused ";
}
void	Account::makeDeposit( int deposit )
{
	std::cout << deposit << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << withdrawal << std::endl;
	return (true);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}