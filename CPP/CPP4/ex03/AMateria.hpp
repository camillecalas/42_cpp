#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

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
		// virtual void		set_type(std::string const &);

	protected:
		std::string	_type;

};


#endif