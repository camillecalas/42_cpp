#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string);
		ClapTrap(ClapTrap const &);
		~ClapTrap();
		ClapTrap & operator=(ClapTrap const &);

		void		attack(const std::string& target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);

		std::string	getName(void) const;
		int			getHit(void) const;
		int			getEnergy(void) const;
		int			getAttack(void) const;

	private:
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;

};

#endif