#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "Ice.hpp"
// #include "Cure.hpp"

# define MAX_ITEMS 4

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &);
		virtual	~MateriaSource();

		MateriaSource & operator=(MateriaSource const &);

		virtual void		learnMateria(AMateria* m);
		virtual AMateria*	createMateria(std::string const & type);

	private:
		AMateria	*_inventory[MAX_ITEMS];

};

#endif