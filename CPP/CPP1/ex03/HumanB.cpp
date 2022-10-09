#include "HumanB.hpp"
// #include "Weapon.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (_weapon != NULL)
		std::cout << _name << " > attacks with their " << _weapon->getType() << std::endl;
}
