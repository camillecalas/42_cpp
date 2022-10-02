#include "Zombie.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;

	Zombie	*camille;
	Zombie	*diego;
	camille = newZombie("Camille");
	diego = newZombie("Diego");

	camille->announce();
	delete (camille);
	diego->announce();
	randomChump("Bar");
	delete(diego);

	return (0);	
}