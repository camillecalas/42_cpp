#include "ScavTrap.hpp"

/*********************** CONSTRUCTORS ***********************/
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap    | Constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_value = _hit_points;
	return ;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap    | String constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_value = _hit_points;
	return ;
}
ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap()
{
	std::cout << "ScavTrap    | Copy constructor callled" << std::endl;
	*this = copy;
}
ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap    | Destructor called" << std::endl;
	return ;	
}
/************************* OPERATORS OVERLOAD *************************/
ScavTrap & ScavTrap::operator=(ScavTrap const &rhs)
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
void	ScavTrap::attack(const std::string& target)
{
	ClapTrap::attack(target, "ScavTrap");
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap | Gate Keeper Mode " << std::endl;
}
