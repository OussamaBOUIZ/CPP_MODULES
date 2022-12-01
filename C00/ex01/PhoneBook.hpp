#include "Contact.hpp"

class	PhoneBook {
	private:
		Contact 	contacts[8];
		void		addContact(void);
		void		displaySingleContact(Contact contact, int index);
		void		displayContacts(void);	
		void		getContact(void);
	public:
		std::string promptUser(void);
		void		executeCommand(std::string command);
};