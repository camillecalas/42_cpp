#include "Zombie.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;

	int	N = 10;

	Zombie	*zombie = zombieHorde(N, "Diego");
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete [] (zombie);
	zombie = 0;

	return (0);	
}