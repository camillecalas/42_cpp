#include "FragTrap.hpp"

/*********************** CONSTRUCTORS ***********************/
FragTrap::FragTrap() : ClapTrap()
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap | Constructor called" << std::endl;
	return ;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap | String constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
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
	if (target.empty())
	{
		std::cout << "Target is missing" << std::endl;
		return ;
	}
	if (_hit_points <= 0)
		std::cout << "FragTrap " << getName() << " cannot attack. He is already dead " << std::endl;
	else if (_energy_points <= 0)
		std::cout << "FragTrap " << getName() << " cannot attack. He is out of energy " << std::endl;
	else
	{
		std::cout << "FragTrap " << getName() << " attacks "<< target << ", causing " << getAttack() << " points of damage!" << std::endl;
		_energy_points -= 1;
	}
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "[ FragTrap (takeDamage): ]" << std::endl;
	ClapTrap::takeDamage(amount);
	std::cout << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "[ FragTrap (beRepaired): ]" << std::endl;
	ClapTrap::beRepaired(amount);
}


void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap | High fives " << std::endl;
}

