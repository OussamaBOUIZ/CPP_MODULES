# include <iostream>
# include <cstdlib>
# include "casting.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

int main (void )
{
	Base	*basePointer;
	
	for (size_t i = 0; i < 10; i++)
	{
		basePointer = generate();
		identify(basePointer);
	}

	basePointer = new Derived;
	identify(basePointer);

	try {
		
		Derived derivedObj = Derived();
		Base	&baseRef =  derivedObj;
		Base	pureBaseObj = Base();
		Base	&pureBaseRef = pureBaseObj;
		Derived	&derivedRef = dynamic_cast<Derived &>(pureBaseRef);
		(void)derivedRef;
		(void)baseRef;
	}
	catch ( const std::bad_cast& excep)
	{
		std::cerr <<"Cast failed due to : " << excep.what() << std::endl;
	}
	return (0);
}