#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

# define MAX_ITEMS 4

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string);
		Character(Character const &);
		virtual	~Character();

		Character & operator=(Character const &);

		virtual std::string const & getName() const;
		virtual void 				equip(AMateria* m);
		virtual void 				unequip(int idx);
		virtual void 				use(int idx, ICharacter& target);

	private:
		std::string	_name;
		int			*i;
		AMateria	*_saveinventory[MAX_ITEMS];
		AMateria	*_inventory[MAX_ITEMS];

};

#endif