#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string);
		DiamondTrap(DiamondTrap const &);
		~DiamondTrap();
		DiamondTrap &	operator=(DiamondTrap const &rhs);

		using			ScavTrap::guardGate;
		using			FragTrap::highFivesGuys;
		virtual void	attack(const std::string &target);
		void			whoAmI();
	
	private:
		std::string	_name;

};

#endif