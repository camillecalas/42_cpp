#include "ScavTrap.hpp"

/*********************** CONSTRUCTORS ***********************/
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap | Constructor called" << std::endl;
	return ;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap | String constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	return ;
}
ScavTrap::ScavTrap(ScavTrap const &copy)
{
	std::cout << "ScavTrap | Copy constructor callled" << std::endl;
	*this = copy;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap | Destructor called" << std::endl;
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
	if (target.empty())
	{
		std::cout << "Target is missing" << std::endl;
		return ;
	}
	if (_hit_points <= 0)
		std::cout << "ScavTrap " << getName() << " cannot attack. He is already dead " << std::endl;
	else if (_energy_points <= 0)
		std::cout << "ScavTrap " << getName() << " cannot attack. He is out of energy " << std::endl;
	else
	{
		std::cout << "ScavTrap " << getName() << " attacks "<< target << ", causing " << getAttack() << " points of damage!" << std::endl;
		_energy_points -= 1;
	}
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "[ ScavTrap (takeDamage): ]" << std::endl;
	ClapTrap::takeDamage(amount);
	std::cout << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "[ ScavTrap (beRepaired): ]" << std::endl;
	ClapTrap::beRepaired(amount);
}


void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap | Gate Keeper Mode " << std::endl;
}


