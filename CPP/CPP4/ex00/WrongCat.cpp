#include "WrongCat.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat    | Constructor" << std::endl;
}
WrongCat::WrongCat(WrongCat const &copy)
{
	std::cout << "WrongCat    | Copy Constructor" << std::endl;
	*this = copy;
}
WrongCat::WrongCat(std::string type)
{
	_type = type;
	std::cout << "WrongCat    | Surcharged Constructor" << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat    | Destructor" << std::endl;
}
/******************* OPERATORS OVERLOAD *******************/
WrongCat	& WrongCat::operator=(WrongCat const &rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	return (*this);
}
/************************ METHODES ************************/
void	WrongCat::makeSound(void) const
{
	std::cout << "MIAOU" << std::endl;
}