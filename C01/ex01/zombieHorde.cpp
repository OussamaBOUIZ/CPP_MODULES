#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie	*zHorde;

	if (N <= 0)
		return (nullptr);
	zHorde = new (std::nothrow) Zombie[N];
	if (zHorde == nullptr)
		{std::cerr << "new failed" << std::endl; exit(0);}
	for (int i = 0; i < N; i++)
		zHorde[i].name = name;
	return (zHorde);
}