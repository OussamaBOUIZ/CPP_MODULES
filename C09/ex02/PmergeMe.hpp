#ifndef __PMERGEME_H__
# define __PMERGEME_H__

class PmergeMe {
	public:
		PmergeMe ( void );
		~PmergeMe ( void );
		PmergeMe ( const PmergeMe & );
		PmergeMe	&operator= ( const PmergeMe & );
};


#endif