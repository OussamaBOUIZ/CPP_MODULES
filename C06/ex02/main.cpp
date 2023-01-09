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
		std::cout << "Generating Random address..." << std::endl;
		basePointer = generate();
		identify(basePointer);
	}

	basePointer = new Derived;
	identify(basePointer);


	A	ClassA;

	Base &baseRef1 = ClassA;
	identify(baseRef1);

	B	ClassB;
	Base &baseRef2 = ClassB;
	identify(baseRef2);

	C	ClassC;
	Base &baseRef3 = ClassC;
	identify(baseRef3);

	Derived classDerived;
	Base &baseRefD = classDerived;
	identify(baseRefD);
	// try {
		
	// 	Derived derivedObj = Derived();
	// 	Base	&baseRef =  derivedObj;
	// 	Base	pureBaseObj = Base();
	// 	Base	&pureBaseRef = pureBaseObj;
	// 	Derived	&derivedRef = dynamic_cast<Derived &>(pureBaseRef);
	// 	(void)derivedRef;
	// 	(void)baseRef;
	// }
	// catch ( const std::bad_cast& excep)
	// {
	// 	std::cerr <<"Cast failed due to : " << excep.what() << std::endl;
	// }
	return (0);
}