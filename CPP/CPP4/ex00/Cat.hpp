#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &copy);
		virtual ~Cat();

		Cat	&			operator=(Cat const &);

		virtual void	makeSound(void) const;
};

#endif