#include "WrongAnimal.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal | Constructor" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal | Copy Constructor" << std::endl;
	*this = copy;
}
WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal | Surcharged Constructor" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal | Destructor" << std::endl;
}
/******************* OPERATORS OVERLOAD *******************/
WrongAnimal	& WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	return (*this);
}
/************************ METHODES ************************/
void	WrongAnimal::makeSound(void) const
{
	std::cout << "WRONG ANIMAL" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}