#include "Ice.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice       | Constructor" << std::endl;
}

Ice::Ice(Ice const & copy) : AMateria(copy)
{
	*this = copy;
	std::cout  << "Ice       | Copy Constructor" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice       | Destructor" << std::endl;
}

/******************* OPERATORS OVERLOAD *******************/
Ice &	Ice::operator=(Ice const &)
{
	return (*this);
}

/************************ METHODES ************************/
AMateria *	Ice::clone() const
{
	return (new Ice (*this));
}

void 	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}