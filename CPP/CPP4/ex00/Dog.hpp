#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &copy);
		Dog(std::string);
		virtual ~Dog();

		Dog	&			operator=(Dog const &);

		virtual void	makeSound(void) const;
};

#endif