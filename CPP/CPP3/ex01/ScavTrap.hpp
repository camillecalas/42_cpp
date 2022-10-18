#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string);
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();

		ScavTrap &	operator=(ScavTrap const &rhs);

		void		attack(const std::string& target);
		void		guardGate();
};



#endif