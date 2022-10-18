#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string);
		ScavTrap(ScavTrap const &copy);
		virtual ~ScavTrap();

		ScavTrap &	operator=(ScavTrap const &rhs);

		void		attack(const std::string& target);
		// void		beRepaired(unsigned int amount);
		void		guardGate();
};



#endif