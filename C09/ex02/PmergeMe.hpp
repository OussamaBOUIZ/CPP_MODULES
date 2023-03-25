#ifndef __PMERGEME_H__
# define __PMERGEME_H__
# include <vector>
# include <deque>
# include <iostream>
# include <cstdlib>
# include <ctime>

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
		void				_printVectorOfPairs ( std::vector<std::pair<int, int> > & );
		void				_sortThePairsInVector ( std::vector<std::pair<int, int> > & );
		void				_sortThePairsInDeque( std::deque<std::pair<int, int> > & );
};

void	errorMessage ( const char * );

#endif