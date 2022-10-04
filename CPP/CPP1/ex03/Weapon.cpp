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

const std::string &Weapon::getType(void) const
{
	// std::string const &typeRef = _type;
	// return (typeRef);
	return (_type);
}

void	Weapon::setType(std::string const &type)
{
	_type = type;
}

/* En résumé moi je fais ça :
void setType(std::string const& type) { _type = type; }

std::string const& getType() const { return _type; }

Si tu fais setType(std::string tupe) quand on appelle la fonction ça crée une copie du paramètre et ça le passe à ta fonction. C'est nul. Si tu passes une const réf, beh ça passe juste la réf sans faire une copie inutile*/