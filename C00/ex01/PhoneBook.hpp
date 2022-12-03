#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>
# define CONTACT_SIZE 8

class	PhoneBook {
	private:
		Contact 	contacts[8];
		int			lastEmptyElement(void);
		void		addContact(void);
		void		displaySingleContact(int index);
		void		displayAllContactField(int index);
		int			displayContacts(void);	
		void		getContact();
	public:
		std::string promptUser(void);
		void		executeCommand(std::string command);
};

int			isnumeric(std::string number);
void		print_field(std::string field);
std::string	getValidInput(void);
