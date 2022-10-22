#include "MateriaSource.hpp"
	
MateriaSource::MateriaSource()
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		_inventory[i] = NULL;
	}

	for (int i = 0; i < MAX_ITEMS; i++)
	{
		std::cout << "invo[i] = " << _inventory[i] << std::endl;
	}
	std::cout << "Materia   | Constructor" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	*this = copy;
	std::cout  << "Materia   | Copy Constructor" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		delete (_inventory[i]);
		_inventory[i] = NULL;
	}
	std::cout << "Materia   | Destructor" << std::endl;
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
	std::cout << " ** learnMateria Methode **" << std::endl;
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
	}

	for (int i = 0; i < MAX_ITEMS; i++)
	{
		std::cout << "invo[i] = " << _inventory[i] << std::endl;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	if (type.compare("ice"))
	{
		AMateria *ice = new Ice();
		return (ice);
	}
	// else if (type.compare("cure"))
	// {
	// 	AMateria *cure = new Cure();
	// 	return (cure);
	// }
	return (0);

}