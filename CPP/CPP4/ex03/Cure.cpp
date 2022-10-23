#include "Cure.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure      | Constructor" << std::endl;
}

Cure::Cure(Cure const & copy) : AMateria()
{
	*this = copy;
	// std::cout  << "Cure       | Copy Constructor" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Cure      | Destructor" << std::endl;
}

/******************* OPERATORS OVERLOAD *******************/
Cure &	Cure::operator=(Cure const &)
{
	return (*this);
}

/************************ METHODES ************************/
AMateria *	Cure::clone() const
{
	return (new Cure (*this));
}

void 	Cure::use(ICharacter& target)
{
	std::cout << "* heals *" << target.getName() << "’s wounds *" << std::endl;
}