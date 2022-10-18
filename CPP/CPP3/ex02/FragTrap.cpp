#include "FragTrap.hpp"

/*********************** CONSTRUCTORS ***********************/
FragTrap::FragTrap() : ClapTrap()
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	_value = _hit_points;
	std::cout << "FragTrap | Constructor called" << std::endl;
	return ;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap | String constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	_value = _hit_points;
	return ;
}
FragTrap::FragTrap(FragTrap const & copy)
{
	std::cout << "FragTrap | Copy constructor callled" << std::endl;
	*this = copy;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap | Destructor called" << std::endl;
	return ;	
}
/************************* OPERATORS OVERLOAD *************************/
FragTrap & FragTrap::operator=(FragTrap const &rhs)
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
void	FragTrap::attack(const std::string& target)
{
	ClapTrap::attack(target, "FragTrap");
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap | High fives " << std::endl;
}
