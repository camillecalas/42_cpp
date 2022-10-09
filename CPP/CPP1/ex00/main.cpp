#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie	*camille = newZombie("Camille");
	Zombie	*diego = newZombie("Diego");

	camille->announce();
	delete (camille); //On libère la case mémoire
	camille = 0;  //On indique que le pointeur ne pointe plus vers rien
	
	diego->announce();
	delete(diego);
	diego = 0;

	randomChump("Bar");

	return (0);	
}

/* Avec randomChump, le Zombie est detruit en dehors de la fonction, on ne peut pas faire annoncer le Zombie dans le main par exemple */