#include "Weapon.hpp"


Weapon::Weapon( std::string type ): type(type) {};

void	Weapon::setType( std::string newType )
{
	type = newType;
}

const std::string	&Weapon::getType( void )
{
	const std::string	&refType = type;
	return (refType);
}
