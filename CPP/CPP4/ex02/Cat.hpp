#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &copy);
		virtual ~Cat();

		Cat	&			operator=(Cat const &);

		virtual void	makeSound(void) const;
		void			setIdea(int, std::string);
		std::string		getIdea(int);

	private:
		Brain	*_brain;
};

#endif