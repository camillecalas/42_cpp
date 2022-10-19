#include "Cat.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Cat::Cat() : Animal(), _brain(new Brain)
{
	_type = "CAT";
	std::cout << "Cat    | Constructor" << std::endl;
}
/*******************************************************/
Cat::Cat(std::string type) : _brain(new Brain)
{
	_type = type;
	std::cout << "Cat    | Surcharged Constructor" << std::endl;
}
/*******************************************************/
Cat::Cat(Cat const &copy) : _brain(0)
{
	std::cout << "Cat    | Copy Constructor" << std::endl;
	_brain = new Brain(*(copy._brain));
	*this = copy;
}
/*******************************************************/
Cat::~Cat()
{
	delete _brain;
	_brain = 0;
	std::cout << "Cat    | Destructor" << std::endl;
}

/******************* OPERATORS OVERLOAD *******************/
Cat	& Cat::operator=(Cat const &rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	delete _brain;
	_brain = new Brain(*(rhs._brain));
	return (*this);
}
/************************ METHODES ************************/
void	Cat::makeSound(void) const
{
	std::cout << "MIAOU" << std::endl;
}