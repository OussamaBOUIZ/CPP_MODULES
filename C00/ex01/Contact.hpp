#include <iostream>
#include <string>

class Contact {
	public:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
};

/* SAVED CONTACT CAN'T HAVE EMPTY FIELD*/
/*
	If the text is longer than the column, 
	it must be truncated and the last displayable 
	character must be replaced by a dot (’.’)
*/