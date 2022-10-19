#include "Animal.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Animal::Animal() :_type("Unkown")
{
	std::cout << "Animal | Constructor" << std::endl;
}
Animal::Animal(Animal const &copy)
{
	std::cout << "Animal | Copy Constructor" << std::endl;
	*this = copy;
}
Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal | Surcharged Constructor" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Animal | Destructor" << std::endl;
}
/******************* OPERATORS OVERLOAD *******************/
Animal	& Animal::operator=(Animal const &rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	return (*this);
}
/************************ METHODES ************************/
// void	Animal::makeSound(void) const
// {
// 	std::cout << "ANIMAL" << std::endl;
// }

std::string	Animal::getType() const
{
	return (_type);
}