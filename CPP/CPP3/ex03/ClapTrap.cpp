#include "ClapTrap.hpp"

/*********** CONSTRUCTOR | DESTRUCTOR ***********/
ClapTrap::ClapTrap():
_name("Unkown"), _hit_points(10), _energy_points(10), _attack_damage(0), _value(_hit_points)
{
	std::cout << "Default     | Default constructor called" << std::endl;
	return ;
}
ClapTrap::ClapTrap(std::string name): 
_name(name), _hit_points(10), _energy_points(10), _attack_damage(0), _value(_hit_points)
{
	std::cout << "Default     | String constructor called" << std::endl;
	return ;
}
ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "Default     | Copy constructor callled" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default     | Destructor called" << std::endl;
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

void ClapTrap::attack(const std::string& target, std::string type)
{
	if (target.empty())
	{
		std::cout << "Target is missing" << std::endl;
		return ;
	}
	if (_hit_points <= 0)
		std::cout << type << " "  << getName() << " cannot attack. He is already dead " << std::endl;
	else if (_energy_points <= 0)
		std::cout << type << " " << getName() << " cannot attack. He is out of energy " << std::endl;
	else
	{
		std::cout << type << " " << getName() << " attacks "<< target << ", causing " << getAttack() << " points of damage!" << std::endl;
		_energy_points -= 1;
	}
	return ;
}
/*********************************/

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > (unsigned int)_value)
	{
		std::cout << "No negative number allowed and the maximum amount of damage possible is " << _value << std::endl;
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
		std::cout << " Life points = " << getHit() << std::endl;
	return ;
}
/*********************************/

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > (unsigned int)_value)
	{
		std::cout << "No negative number allowed and the maximum amount of repairs possible is " << _value << std::endl;
		return ;
	}
	if (!_hit_points)
		std::cout << "ClapTrap " << getName() << " is already dead" << std::endl;
	else if (_energy_points <= 0)
		std::cout << "ClapTrap " << getName() << " is too weak to heal" << std::endl;
	else if (_hit_points >= _value)
		std::cout << "ClapTrap " <<	getName() << " has already full points: " << _value << std::endl;
	else if (_energy_points && _hit_points && _hit_points < _value
		&& (amount > 0 && amount <= (unsigned int)_value))
	{
		_energy_points -= 1;
		std::cout << "ClapTrap " << getName() << " earned " << amount << " points of energy" << std::endl;
		_hit_points += amount;
	}
	if (_hit_points >= _value)
		_hit_points = _value;
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
