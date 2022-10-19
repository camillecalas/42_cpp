#include "Cat.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Cat::Cat() : Animal()
{
	_type = "CAT";
	std::cout << "Cat    | Constructor" << std::endl;
}
Cat::Cat(std::string type)
{
	_type = type;
	std::cout << "Cat    | Surcharged Constructor" << std::endl;
}
Cat::Cat(Cat const &copy)
{
	std::cout << "Cat    | Copy Constructor" << std::endl;
	*this = copy;
}
Cat::~Cat()
{
	std::cout << "Cat    | Destructor" << std::endl;
}
/******************* OPERATORS OVERLOAD *******************/
Cat	& Cat::operator=(Cat const &rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	return (*this);
}
/************************ METHODES ************************/
void	Cat::makeSound(void) const
{
	std::cout << "MIAOU" << std::endl;
}