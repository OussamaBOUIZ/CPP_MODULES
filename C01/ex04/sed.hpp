#ifndef __SED_H__
# define __SED_H__
# include <iostream>
# include <fstream>
# include <unistd.h>

typedef	std::string	string;

void	getValidInfile(string	&fileNameRef, std::ifstream &infileObjRef);
string	getValidString(string order);
void	replaceString( string &bufferRef, string oldString );

#endif