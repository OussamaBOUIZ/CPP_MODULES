#ifndef __PMERGEME_H__
# define __PMERGEME_H__
# include <vector>
# include <deque>
# include <iostream>
typedef std::string string;
class PmergeMe {
	public:
		PmergeMe ( char **, int );
		PmergeMe ( void );
		~PmergeMe ( void );
		PmergeMe ( const PmergeMe & );
		PmergeMe	&operator= ( const PmergeMe & );
		void	displayBothContainers ( void );
		void	sortBothContainers ( void );
	private:
		std::vector<int>	_vectorOfNums;
		std::deque<int>		_dequeOfNums;
		void				_fillTheVector ( char **, int );
		void				_fillTheDeque ( char **, int );
		void				_displayTheVector ( void );
		void				_displayTheDeque ( void );
		void				_sortVector( void );
		void				_sortDeque( void );
		void				_getDuration ( void );
};

void	errorMessage ( const char * );
/*
	Jacobsthal numbers
	 0, 1, 1, 3, 5, 11, 21, 43, 85, 171, 341
	 , 683, 1365, 2731, 5461, 10923, 21845, 
	 43691, 87381, 174763, 349525, …
*/
#endif