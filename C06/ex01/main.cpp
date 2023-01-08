# include "serialization.hpp"

int main ( void )
{
	Data	randomData("Random Data");
	uintptr_t	A = serialize(&randomData);
	std::cout << A << std::endl;

	Data	*dataPtr = deserialize(A);
	
	std::cout << *dataPtr << std::endl;

	Data	*Ping = new Data("Ping");
	uintptr_t	Pong;
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "\t\t." << std::endl;
		Pong = serialize(Ping);
		Ping = deserialize(Pong);
	}

	std::cout << *Ping << std::endl;
	std::cout << Pong << std::endl;

	
	return (0);
}
