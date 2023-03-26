# include "PmergeMe.hpp"

int	main ( int ac, char **av )
{
	if (ac < 3)
		errorMessage("");
	PmergeMe	MergeInsertSorter(av + 1, ac - 1);

	MergeInsertSorter.sortBothContainers();
	return (0);
}