#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &copy);
		virtual ~Dog();

		Dog	&			operator=(Dog const &);

		virtual void	makeSound(void) const;
		void			setIdea(int, std::string);
		std::string		getIdea(int);


	private:
		Brain	*_brain;
};

#endif