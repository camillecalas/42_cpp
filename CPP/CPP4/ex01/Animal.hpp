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

		virtual void	makeSound(void) const;

		//getters
		std::string		getType(void) const;

	protected:
		std::string	_type;
};

#endif