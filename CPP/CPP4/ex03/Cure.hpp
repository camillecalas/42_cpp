#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include <iomanip>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &);
		virtual ~Cure();

		Cure &			operator=(Cure const &);

		virtual	AMateria* 	clone() const;
		virtual void 		use(ICharacter& target);

};


#endif