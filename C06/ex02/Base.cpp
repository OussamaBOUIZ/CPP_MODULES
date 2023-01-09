# include "Base.hpp"
# include <iostream>
	
Base::Base ( void )
{
	std::cout << "Default constructing Base" << std::endl;
}

Base::~Base ( void )
{
	std::cout << "Destructing Base" << std::endl;
}

Derived::Derived ( void )
{
	std::cout << "Default constructing Derived" << std::endl;
}

Derived::~Derived ( void )
{
	std::cout << "Destructing Derived" << std::endl;
}