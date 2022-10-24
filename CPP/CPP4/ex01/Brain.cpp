#include "Brain.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Brain::Brain()
{
	std::cout << "Brain  | Constructor" << std::endl;
}
Brain::Brain(Brain const &copy)
{
	std::cout << "Brain  | Copy Constructor" << std::endl;
	*this = copy;
}
Brain::~Brain()
{
	std::cout << "Brain  | Destructor" << std::endl;
}
/******************* OPERATORS OVERLOAD *******************/
Brain	& Brain::operator=(Brain const &rhs)
{
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < MAX_IDEAS; i++)
		_ideas[i] = rhs._ideas[i];
	return (*this);
}
/************************ METHODES ************************/
void	Brain::setIdea(int i, std::string str)
{
	if (i >= MAX_IDEAS)
	{
		std::cout << "Too much ideas" << std::endl;
		return ;
	}
	_ideas[i] = str;
}

std::string	Brain::getIdea(int i) const
{
	if (i >= MAX_IDEAS)
		return ("Too much ideas");
	return (_ideas[i]);
}
