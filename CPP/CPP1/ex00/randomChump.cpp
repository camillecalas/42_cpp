#include "Zombie.hpp"
#include <iostream>
#include <string>

void randomChump( std::string name )
{
	Zombie new_zombie(name);
	new_zombie.announce();
}