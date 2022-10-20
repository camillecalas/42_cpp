#include "DiamondTrap.hpp"

/*********************** CONSTRUCTORS ***********************/
DiamondTrap::DiamondTrap() : ClapTrap("Unkown_clap_name")
{
	this->_name = "Unkown";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap | Constructor called" << std::endl;
	return ;
}
DiamondTrap::DiamondTrap(DiamondTrap const &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap | Copy constructor callled" << std::endl;
	*this = copy;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap")
{
	std::cout << "DiamondTrap | String constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	return ;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap | Destructor called" << std::endl;
	return ;	
}

/************************* OPERATORS OVERLOAD *************************/
DiamondTrap & DiamondTrap::operator=(DiamondTrap const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

/***************************** METHODES *****************************/
void	DiamondTrap::whoAmI()
{
	std::cout << "Name : " << _name << " | ClapTrap name : " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
