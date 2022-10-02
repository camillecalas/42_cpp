#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : _type(type)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

const std::string &Weapon::getType(void)
{
	std::string const &typeRef = _type;
	return (typeRef);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}