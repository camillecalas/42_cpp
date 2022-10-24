#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

// static int x = 0;

class AMateria
{
	public:
		AMateria();
		AMateria(AMateria const &);
		AMateria(std::string const & type);
		virtual ~AMateria();

		AMateria &			operator=(AMateria const &);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);

	protected:
		std::string	_type;
		// AMateria	*_save[1024];

};


#endif