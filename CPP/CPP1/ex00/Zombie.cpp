#include "Zombie.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Zombie::Zombie(std::string name): _name(name)
{
	std::cout << "Zombie " << _name << " has been created" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " has been destroyed" << std::endl;
	return ;
}

/************************ METHODES ************************/
void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}