#include "MateriaSource.hpp"
	
MateriaSource::MateriaSource()
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		_inventory[i] = NULL;
	}
	// std::cout << "Materia   | Constructor" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	*this = copy;
	// std::cout  << "Materia   | Copy Constructor" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		delete (this->_inventory[i]);
		this->_inventory[i] = NULL;
	}
	// std::cout << "Materia   | Destructor" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < MAX_ITEMS; i++)
		_inventory[i] = rhs._inventory[i];
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	if (!type.compare("ice"))
	{
		AMateria *ice = new Ice();
		return (ice);
	}
	else if (!type.compare("cure"))
	{
		AMateria *cure = new Cure();
		return (cure);
	}
	return (0);

}