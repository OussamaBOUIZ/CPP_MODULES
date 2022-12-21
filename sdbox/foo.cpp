#include <iostream>

class Foo
{
	public:
		Foo(int value);
		Foo( void );
		~Foo( void );
		void	presetBar( void );
		void	setBarTo( int val );
		void	displayFooMembers( void );
		int		bar;
		int		*barHeapAddress;
		int		*barStackAddress;

};

Foo::Foo( int value)
{
	bar = value;
	barStackAddress = &bar;
}

Foo::Foo( void )
{
	bar = 42;
}

Foo::~Foo( void )
{
	std::cout << "Just Before Destructing : "<< bar << std::endl; ;
}

void	Foo::presetBar( void )
{
	barHeapAddress = new int;
	*barHeapAddress = bar;
}

void	Foo::setBarTo( int val )
{
	bar = val;
}

void	Foo::displayFooMembers( void )
{
	std::cout << "The value of BAR : " << bar << std::endl;
	std::cout << "The address of BAR on the HEAP: "<< barHeapAddress << std::endl;
	std::cout << "The address of BAR on the STACK: "<< barStackAddress << std::endl;
}

int main ( void )
{
	Foo	Apple();

	return (0);
}