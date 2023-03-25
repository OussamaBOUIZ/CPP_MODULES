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
			this->_vectorOfNums.push_back(std::atoi(string(arguments[i]).c_str()));
	}
	catch ( const std::invalid_argument& excep) {
		errorMessage("");
	}
}

void	PmergeMe::_fillTheDeque ( char	**arguments, int numOfArguments )
{
	try {
		for (int i = 0; i < numOfArguments; i++)
			this->_dequeOfNums.push_back(std::atoi(string(arguments[i]).c_str()));
	}
	catch ( const std::invalid_argument& excep) {
		errorMessage("");
	}
}

void	PmergeMe::_printVectorOfPairs(std::vector<std::pair<int, int> > &vec )
{
	std::vector<std::pair<int, int> >::iterator	it;

	for (it = vec.begin(); it != vec.end(); it++)
		std::cout << "( " << it->first << ", " << it->second << " )" << std::endl;
}

void	PmergeMe::_sortThePairsInVector (std::vector<std::pair<int, int> > &vec )
{
	for (size_t i = 0; i < vec.size(); i++)
		if (vec[i].first > vec[i].second)
			std::swap(vec[i].first, vec[i].second);
}

void	PmergeMe::_sortThePairsInDeque (std::deque<std::pair<int, int> > &deq )
{
	for (size_t i = 0; i < deq.size(); i++)
		if (deq[i].first > deq[i].second)
			std::swap(deq[i].first, deq[i].second);
}

bool sortBySecond(const std::pair<int, int>& left, const std::pair<int, int>& right) {
    return left.second < right.second;
}

void	PmergeMe::_sortVector ( void )
{
	bool	even;
	int		straggler = 0;
	std::vector<std::pair<int, int> >	vectorOfPairs;
	std::vector<int>					pend;
	std::vector<int>					Sequence;
	time_t	currTime;

	time(&currTime);
	std::cout << currTime << std::endl;
	exit(0);
	even = this->_vectorOfNums.size() % 2 ? false : true;
	if (even == false)
	{
		straggler = this->_vectorOfNums[this->_vectorOfNums.size() - 1];
		this->_vectorOfNums.pop_back();
	}
	for (size_t i = 0; i < this->_vectorOfNums.size() - 1; i += 2)
		vectorOfPairs.push_back(std::make_pair(this->_vectorOfNums[i], this->_vectorOfNums[i + 1]));
	this->_printVectorOfPairs(vectorOfPairs);
	std::cout << std::endl;
	this->_sortThePairsInVector(vectorOfPairs);
	std::sort(vectorOfPairs.begin(), vectorOfPairs.end(), sortBySecond);
	for (size_t i = 0; i < vectorOfPairs.size(); i++)
		pend.push_back(vectorOfPairs[i].first);
	for (size_t i = 0; i < vectorOfPairs.size(); i++)
		Sequence.push_back(vectorOfPairs[i].second);
	std::vector<int>::iterator	it;

	for (size_t i = 0; i < pend.size(); i++)
	{
		it = std::upper_bound(Sequence.begin(), Sequence.end(), pend[i]);
		Sequence.insert(it, pend[i]);
	}
	if (even == false)
	{
		it = std::upper_bound(Sequence.begin(), Sequence.end(), straggler);
		Sequence.insert(it, straggler);
	}
	for (size_t i = 0; i < Sequence.size(); i++)
		std::cout << Sequence[i] << std::endl;
}


void	PmergeMe::_sortDeque ( void )
{
	bool	even;
	int		straggler = 0;
	std::deque<std::pair<int, int> >	dequeOfPairs;
	std::deque<int>					pend;
	std::deque<int>					Sequence;
	

	even = this->_dequeOfNums.size() % 2 ? false : true;
	if (even == false)
	{
		straggler = this->_dequeOfNums[this->_dequeOfNums.size() - 1];
		this->_dequeOfNums.pop_back();
	}
	for (size_t i = 0; i < this->_dequeOfNums.size() - 2; i += 2)
		dequeOfPairs.push_back(std::make_pair(this->_dequeOfNums[i], this->_dequeOfNums[i + 1]));
	this->_sortThePairsInDeque(dequeOfPairs);
	std::sort(dequeOfPairs.begin(), dequeOfPairs.end(), sortBySecond);
	for (size_t i = 0; i < dequeOfPairs.size(); i++)
		pend.push_back(dequeOfPairs[i].first);
	for (size_t i = 0; i < dequeOfPairs.size(); i++)
		Sequence.push_back(dequeOfPairs[i].second);
	std::deque<int>::iterator	it;

	for (size_t i = 0; i < pend.size(); i++)
	{
		it = std::upper_bound(Sequence.begin(), Sequence.end(), pend[i]);
		Sequence.insert(it, pend[i]);
	}
	if (even == false)
	{
		it = std::upper_bound(Sequence.begin(), Sequence.end(), straggler);
		Sequence.insert(it, straggler);
	}
	for (size_t i = 0; i < Sequence.size(); i++)
		std::cout << Sequence[i] << std::endl;
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
	// this->_sortDeque();
}

/* ----------------------------------------------------- */
/* ------------------ UTILS  FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

void	errorMessage ( const char *message )
{
	std::cerr << "Error " << message << std::endl;
	exit (EXIT_FAILURE);
}