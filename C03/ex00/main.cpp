#include "ClapTrap.hpp"

void	basicScenario( ClapTrap &obj, unsigned int damage, unsigned int repairs, const string &target )
{
	obj.takeDamage(damage);
	obj.beRepaired(repairs);
	obj.attack(target);
}

void	repetitiveAttack( ClapTrap &obj, const string &target, unsigned int repairs, unsigned int damage, size_t count )
{
	obj.takeDamage(damage);
	for (size_t i = 0; i < count; i++)
	{
		obj.attack(target);
		obj.beRepaired(repairs);
	}
}

void	unknownAttacker( ClapTrap obj, const string &target, unsigned int repairs, unsigned int damage)
{
	obj.takeDamage(damage);
	obj.attack(target);
	obj.beRepaired(repairs);
}

void	pingPong (ClapTrap obj1, ClapTrap obj2)
{
	obj1.attack(obj2.getName());
	obj2.takeDamage(5);
	obj2.beRepaired(30);
	obj2.attack(obj1.getName());
	obj1.takeDamage(10);
	obj1.beRepaired(50);
	obj2.attack(obj1.getName());
	obj1.takeDamage(10);
	obj2.attack(obj1.getName());
	obj1.takeDamage(10);
	obj2.attack(obj1.getName());
	obj1.takeDamage(10);
	obj2.attack(obj1.getName());
	obj1.takeDamage(10);
	obj2.attack(obj1.getName());
	obj1.takeDamage(10);
	obj1.beRepaired(25);
}


int	main( void )
{
	ClapTrap lizard("LIZARD");

	std::cout << "/* ----------------------------------------------------- */" << std::endl;
	std::cout << "/* ------------------ BASIC SCENARIO     --------------- */" << std::endl;
	std::cout << "/* ----------------------------------------------------- */" << std::endl;
	basicScenario(lizard, 50, 50, "LION");
	std::cout << "/* ----------------------------------------------------- */" << std::endl;
	std::cout << "/* ------------------ REPETITIVE SCENAR  --------------- */" << std::endl;
	std::cout << "/* ----------------------------------------------------- */" << std::endl;
	repetitiveAttack(lizard, "LION", 145, 100, 12);
	ClapTrap	Ghost;
	std::cout << "/* ----------------------------------------------------- */" << std::endl;
	std::cout << "/* ------------------ UNKNOW ATTACKER    --------------- */" << std::endl;
	std::cout << "/* ----------------------------------------------------- */" << std::endl;
	unknownAttacker(Ghost, "VOID", 42, 42);
	ClapTrap	Zebra("Zebra");
	ClapTrap	lion("Lion");
	std::cout << "/* ----------------------------------------------------- */" << std::endl;
	std::cout << "/* ------------------ PING PONG          --------------- */" << std::endl;
	std::cout << "/* ----------------------------------------------------- */" << std::endl;
	pingPong(Zebra, lion);
	system("leaks claptrap");
	return (0);
}