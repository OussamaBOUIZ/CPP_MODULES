#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>
# define CONTACT_SIZE 8

class	PhoneBook {
	private:
		int			orderOfNextContact;
		Contact 	contacts[8];
		int			lastEmptyElement(void);
		void		addContact(void);
		void		displaySingleContact(int index);
		void		displayAllContactField(int index);
		int			displayContacts(void);	
		void		getContact();
	public:
		PhoneBook(void);
		std::string promptUser(void);
		void		executeCommand(std::string command);
};

int			isnumeric(std::string number);
void		printField(std::string field);
std::string	getValidInput(std::string fieldName);


/*
	It can store a maximum of 8 contacts. 
	If the user tries to add a 9th contact,replace the oldest one by the new one.
*/