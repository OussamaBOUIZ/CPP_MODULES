# include "casting.hpp"
# include <cstdlib>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"


Base	*generate( void )
{
	Base	*randomBase;

	int	choice = rand() % 3;
	switch (choice)
	{
		case 0:
			randomBase = new A;
			break;
		case 1:
			randomBase = new B;
			break;
		case 2:
			randomBase = new C;
			break;
	}
	return (randomBase);
}

void	identify (Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "UNKNOW TYPE" << std::endl;
}

void	identify (Base &p) {
	try {
			
	}
	catch ( const std::exception& excep)
	{
		std::cerr << excep.what() << std::endl;
	}
	(void)p;
}
