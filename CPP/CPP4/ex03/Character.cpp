#include "Character.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Character::Character() : _name("Unkown")
{
	for (int i = 0; i < MAX_ITEMS; i++)
		_inventory[i] = NULL;
	// std::cout << "Character | Constructor" << std::endl;
}

Character::Character(std::string const name) : _name(name)
{
	for (int i = 0; i < MAX_ITEMS; i++)
		_inventory[i] = NULL;
	// std::cout  << "Character | Surcharged Constructor" << std::endl;
}

Character::Character(Character const &copy)
{
	*this = copy;
	// std::cout  << "Character | Copy Constructor" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		delete(_inventory[i]);
		_inventory[i] = 0;
	}
	// std::cout << "Character | Destructor" << std::endl;
}

/******************* OPERATORS OVERLOAD *******************/
Character & Character::operator=(Character const & rhs)
{
	if (this == &rhs)
		return (*this);
	_name = rhs._name;
	for (int i = 0; i < MAX_ITEMS; i++)
		delete(_inventory[i]);
	for (int i = 0; i < MAX_ITEMS; i++)
		_inventory[i]= rhs._inventory[i]->clone();
	return (*this);
	//On utilise clone(), car on veut un nouvel objet sinon si rhs est supprime, ca va supprime ses Amateria et this pointers sur des ponters delete. Il faut copier les objtes pas juste les pointeurs. (ca copie l'adresse de a dans b, on ne veut pas ca) Si a = b, si a est delete, b pointera vers un truc pourri donc on fait a = un clone de l'objet pointe par b
}
/************************ METHODES ************************/
std::string const & Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < MAX_ITEMS)
	{
		_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if(idx >= 0 && idx < MAX_ITEMS && _inventory[idx])
		_inventory[idx]->use(target);
}
