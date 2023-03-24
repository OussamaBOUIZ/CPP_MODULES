# include "PmergeMe.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

PmergeMe::PmergeMe ( char **argument, int numOfArguments )
{
	this->_fillTheVector(argument, numOfArguments);
	this->_fillTheDeque(argument, numOfArguments);
}

PmergeMe::PmergeMe ( void )
{
	
}

PmergeMe::~PmergeMe ( void )
{
	
}

PmergeMe	&PmergeMe::operator= ( const PmergeMe &obj )
{
	if (this == &obj)
		return (*this);
	return (*this);
}

PmergeMe::PmergeMe ( const PmergeMe &obj )
{
	*this = obj;
}

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

void	PmergeMe::_fillTheVector ( char	**arguments, int numOfArguments )
{
	try {
		for (int i = 0; i < numOfArguments; i++)
			this->_vectorOfNums.push_back(std::stoi(string(arguments[i])));
	}
	catch ( const std::invalid_argument& excep) {
		errorMessage("");
	}
}

void	PmergeMe::_fillTheDeque ( char	**arguments, int numOfArguments )
{
	try {
		for (int i = 0; i < numOfArguments; i++)
			this->_dequeOfNums.push_back(std::stoi(string(arguments[i])));
	}
	catch ( const std::invalid_argument& excep) {
		errorMessage("");
	}
}

void	PmergeMe::_sortVector ( void )
{
	
}

void	PmergeMe::_sortDeque ( void )
{

}

void	PmergeMe::displayBothContainers ( void )
{
	for (size_t i = 0; i < this->_vectorOfNums.size(); i++)
		std::cout << this->_vectorOfNums[i] << " ";
	std::cout << "\n";
	for (size_t i = 0; i < this->_dequeOfNums.size(); i++)
		std::cout << this->_dequeOfNums[i] << " ";
	std::cout << "\n";
}

void	PmergeMe::sortBothContainers ( void )
{
	this->_sortVector();
	this->_sortDeque();
}

/* ----------------------------------------------------- */
/* ------------------ UTILS  FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

void	errorMessage ( const char *message )
{
	std::cerr << "Error " << message << std::endl;
	exit (EXIT_FAILURE);
}