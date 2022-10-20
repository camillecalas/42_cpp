#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice     | Constructor" << std::endl;
}

Ice::Ice(Ice const & copy)
{
	*this = copy;
	std::cout  << "Ice     | Copy Constructor" << std::endl;
}

Ice::Ice(std::string const & type) : AMateria()
{
	_type = type;
	std::cout <<  "Ice     | Surcharged Constructor" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice     | Destructor" << std::endl;
}

Ice &	Ice::operator=(Ice const &rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	return (*this);
}

AMateria *	Ice::clone() const
{
	// Ice *iceNew = new Ice();
	// return (iceNew);
	return (new Ice (*this));

}