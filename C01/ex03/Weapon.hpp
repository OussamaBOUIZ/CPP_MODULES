#include <iostream>
#include <string>

class Weapon
{
	public:
		const std::string& getType( void );
		void setType( std::string newType );
	private:
		std::string type;
};