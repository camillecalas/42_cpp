#include "Dog.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Dog::Dog() : Animal("DOG")
{
	std::cout << "Dog    | Constructor" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal()
{
	std::cout << "Dog    | Copy Constructor" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog    | Destructor" << std::endl;
}
/******************* OPERATORS OVERLOAD *******************/
Dog	& Dog::operator=(Dog const &rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	return (*this);
}
/************************ METHODES ************************/
void	Dog::makeSound(void) const
{
	std::cout << "WOUAF" << std::endl;
}