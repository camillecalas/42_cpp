#include "Dog.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Dog::Dog() : Animal(), _brain(0)
{
	_brain = new Brain;
	_type = "DOG";
	std::cout << "Dog    | Constructor" << std::endl;
}
/*******************************************************/
Dog::Dog(std::string type) : _brain(new Brain)
{
	_type = type;
	std::cout << "Dog    | Surcharged Constructor" << std::endl;
}
/*******************************************************/
Dog::Dog(Dog const &copy) : _brain(0)
{
	std::cout << "Dog    | Copy Constructor" << std::endl;
	_brain = new Brain(*(copy._brain));
	*this = copy;
}
/*******************************************************/
Dog::~Dog()
{
	delete _brain;
	_brain = 0;
	std::cout << "Dog    | Destructor" << std::endl;
}

/***************** OPERATORS OVERLOAD *****************/
Dog	& Dog::operator=(Dog const &rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	//Il faut penser à supprimer l'ancien Brain avant de créer le nouveau. C'est ce qui est fait au niveau de l'instruction delete. Ceci n'était pas nécessaire dans le constructeur de copie puisque le personnage ne possédait pas d'arme avant.
	delete _brain;
	_brain = new Brain(*(rhs._brain));
	return (*this);
}

/*********************** METHODES ***********************/
void	Dog::makeSound(void) const
{
	std::cout << "WOUAF" << std::endl;
}
/*******************************************************/
void	Dog::setIdea(int i, std::string str)
{
	this->_brain->setIdea(i, str);
}
/*******************************************************/
std::string	Dog::getIdea(int i)
{
	return (this->_brain->getIdea(i));
}