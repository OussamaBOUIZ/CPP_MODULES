#ifndef __EASYFIND_T__
# define __EASYFIND_T__
#include "easyfind.hpp"

template <typename T>  
int	easyfind( T &aContainer, int element )
{
	typename T::iterator it;
	for ( it = aContainer.begin(); it != aContainer.end(); ++it )
		if (*it == element)
			return (*it);
	throw	std::out_of_range("UNFOUND ELEMENT");
}

#endif