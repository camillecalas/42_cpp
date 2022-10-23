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
			return ;
		}
	}
	std::cerr << "MateriaSource is full!\n";
	// This function is void, the caller cannot handle error cases, thus, we
    // need to delete the material here to avoid memory leaks
	delete (m);
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	std::cerr << "No " << type << " found in MateriaSource\n";
	return (0);
}