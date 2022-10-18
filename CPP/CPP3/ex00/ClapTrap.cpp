#include "ClapTrap.hpp"

/*********** CONSTRUCTOR | DESTRUCTOR ***********/
ClapTrap::ClapTrap():
_name("Unkown"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap | Constructor called" << std::endl;
	return ;
}
ClapTrap::ClapTrap(std::string name): 
_name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap | String constructor called" << std::endl;
	return ;
}
ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "ClapTrap | Copy constructor callled" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap | Destructor called" << std::endl;
	return ;
}

/************************* OPERATORS OVERLOAD *************************/
ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this == &rhs)
		return (*this);
	_name = rhs._name;
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	_attack_damage = rhs._attack_damage;
	return (*this);
}

/************************ METHODES ************************/
void ClapTrap::attack(const std::string& target)
{
	if (target.empty())
	{
		std::cout << "Target is missing" << std::endl;
		return ;
	}
	if (_hit_points <= 0)
		std::cout << "ClapTrap " << getName() << " cannot attack. He is already dead " << std::endl;
	else if (_energy_points <= 0)
		std::cout << "ClapTrap " << getName() << " cannot attack. He is out of energy " << std::endl;
	else
	{
		std::cout << "ClapTrap " << getName() << " attacks "<< target << ", causing " << getAttack() << " points of damage!" << std::endl;
		_energy_points -= 1;
	}
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 10)
	{
		std::cout << "No negative number allowed and the maximum amount of damage possible is " << 10 << std::endl;
		return ;
	}
	if (_hit_points <= 0)
	{
		std::cout << "ClapTrap " << getName() << " is already dead " << std::endl;
		return ;
	}
	_hit_points -= amount;
	std::cout << "ClapTrap " << getName() << " takes " << amount << " point(s) of damage.";
	if (_hit_points <= 0)
		std::cout << " ClapTrap " << getName() << " is now dead " << std::endl;
	else
	{
		if (_hit_points >= 10)
			_hit_points = 10;
		std::cout << " Life points = " << getHit() << std::endl;
	}
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount >= 10)
	{
		std::cout << "No negative number allowed and the maximum amount of repirs possible is " << 10 << std::endl;
		return ;
	}
	if (!_hit_points)
		std::cout << "ClapTrap " << getName() << " is already dead" << std::endl;
	else if (_energy_points <= 0)
		std::cout << "ClapTrap " << getName() << " is too weak to heal" << std::endl;
	else if (_hit_points >= 10)
		std::cout << "ClapTrap " <<	getName() << " has already full points: 10" << std::endl;
	else if (_energy_points && _hit_points && _hit_points < 10
		&& (amount > 0 && amount <= 10))
	{
		_energy_points -= 1;
		std::cout << "ClapTrap " << getName() << " earned " << amount << " points of energy" << std::endl;
		_hit_points += amount;
	}
	if (_hit_points >= 10)
		_hit_points = 10;
	return ;
}

std::string	ClapTrap::getName(void) const
{
	return (_name);
}
int	ClapTrap::getHit(void) const
{
	return (_hit_points);
}
int	ClapTrap::getEnergy(void) const
{
	return (_energy_points);
}
int	ClapTrap::getAttack(void) const
{
	return (_attack_damage);
}
