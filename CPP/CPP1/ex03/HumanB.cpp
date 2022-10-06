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
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (_weapon != NULL)
		std::cout << this->_name << " > attacks with their " << this->_weapon->getType() << std::endl;
}
