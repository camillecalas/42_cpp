#include "Cat.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Cat::Cat() : Animal("CAT"), _brain(new Brain)
{
	std::cout << "Cat    | Constructor" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(), _brain(0)
{
	_brain = new Brain(*(copy._brain));
	*this = copy;
	std::cout << "Cat    | Copy Constructor" << std::endl;
}

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

void	Cat::setIdea(int i, std::string str)
{
	_brain->setIdea(i, str);
}

std::string	Cat::getIdea(int i)
{
	return (_brain->getIdea(i));
}