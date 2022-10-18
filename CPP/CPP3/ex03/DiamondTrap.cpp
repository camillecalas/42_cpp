#include "DiamondTrap.hpp"

/*********************** CONSTRUCTORS ***********************/
DiamondTrap::DiamondTrap() : _name(ClapTrap::_name)
{
	ClapTrap::_name += "_clap_name";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap | Constructor called" << std::endl;
	return ;
}
DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
	std::cout << "DiamondTrap | Copy constructor callled" << std::endl;
	*this = copy;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	std::cout << "DiamondTrap | String constructor called" << std::endl;
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
	_name = rhs._name;
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	_attack_damage = rhs._attack_damage;
	return (*this);
}

/***************************** METHODES *****************************/
void	DiamondTrap::whoAmI()
{
	std::cout << "Name : " << _name << std::endl;
	std::cout << " ClapTrap name : " << ClapTrap::_name << std::endl;
}
