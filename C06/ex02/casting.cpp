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
		case 1:
			randomBase = new B;
		case 2:
			randomBase = new C;
		default:
			break;
	}
	return (randomBase);
}

void	identify (Base *p)
{

}

void	identify (Base &p)
{

}
