#ifndef __EASYFIND_T__
# define __EASYFIND_T__
#include "easyfind.hpp"
#include <algorithm>
template <typename T> int easyfind (T &aContainer, int element )
{
	typename T::iterator it;

	it = std::find ( aContainer.begin(), aContainer.end(), element );
	if (it == aContainer.end())
		throw	std::out_of_range("UNFOUND ELEMENT");
	return (*it);
}

#endif