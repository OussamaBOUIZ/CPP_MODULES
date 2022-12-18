#include "sed.hpp"

void	replaceString( string &bufferRef, string &oldStringRef, string &newStringRef, std::ofstream &outfileObj )
{
	size_t	stringPosition = 0;
	size_t	idx = 0;

	while (true)
	{
		stringPosition = bufferRef.find(oldStringRef, idx);
		if (stringPosition == string::npos)
			break ;
		bufferRef.erase(stringPosition, oldStringRef.length());
		bufferRef.insert(stringPosition, newStringRef);
		idx = stringPosition + newStringRef.length();
	}
	outfileObj << bufferRef << std::endl;
}
