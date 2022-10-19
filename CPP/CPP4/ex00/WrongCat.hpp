#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &copy);
		WrongCat(std::string);
		virtual ~WrongCat();

		WrongCat	&	operator=(WrongCat const &);

		void	makeSound(void) const;
};

#endif