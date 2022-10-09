#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	int	N = 5;

	Zombie	*zombie = zombieHorde(N, "Diego");
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete [] (zombie);
	zombie = 0;
	for (int i = 0; i < N; i++)
		zombie = 0;

	return (0);	
}
