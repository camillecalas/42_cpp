#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(Animal const &copy);
		Animal(std::string);
		virtual ~Animal();

		Animal &		operator=(Animal const &);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string	_type;
};

void	makeSound(Animal const & animal);

#endif