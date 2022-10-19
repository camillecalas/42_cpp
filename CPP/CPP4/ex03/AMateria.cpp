#include "AMateria.hpp"
#include "iomanip"

AMateria::AMateria()
{
	std::cout << "AMateria| Constructor" << std::endl;
}

AMateria::AMateria(AMateria const & copy)
{
	*this = copy;
	std::cout << "AMateria| Copy Constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout <<  "AMateria| Surcharged Constructor" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria| Destructor" << std::endl;
}


AMateria &	AMateria::operator=(AMateria const & rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}