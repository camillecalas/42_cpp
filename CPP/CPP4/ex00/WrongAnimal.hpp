#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &copy);
		WrongAnimal(std::string);
		virtual ~WrongAnimal();

		WrongAnimal	&	operator=(WrongAnimal const &);

		std::string	getType(void) const;
		void		makeSound(void) const;

	protected:
		std::string	_type;
};

#endif