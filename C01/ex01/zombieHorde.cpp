#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie	*zHorde;

	if (N <= 0)
		return (nullptr);
	zHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		zHorde[i].name = name;
	return (zHorde);
}