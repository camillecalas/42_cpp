#include "AMateria.hpp"
#include "iomanip"

AMateria::AMateria()
{
	std::cout << std::setw(10) << "AMateria" << "| Constructor" << std::endl;
}

AMateria::AMateria(AMateria const & copy)
{
	*this = copy;
	std::cout << std::setw(10) << "AMateria" << "| Copy Constructor" << std::endl;
}
AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << std::setw(10) << "AMateria" << "| Surcharged Constructor" << std::endl;
}
AMateria::~AMateria()
{
	std::cout << std::setw(10) << "AMateria" << "| Destructor" << std::endl;
}
