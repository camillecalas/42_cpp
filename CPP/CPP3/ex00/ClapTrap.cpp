#include "ClapTrap.hpp"

/*********** CONSTRUCTOR | DESTRUCTOR ***********/
ClapTrap::ClapTrap():
_name("Unkown"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	return ;
}
ClapTrap::ClapTrap(std::string name): 
_name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	return ;
}
ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
}

ClapTrap::~ClapTrap()
{
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
	if (_energy_points <= 0 || _hit_points <= 0)
	{
		std::cout << "ClapTrap " << getName() << " is out of energy " << std::endl;
		return ;
	}

	std::cout	<< "ClapTrap " 
				<< _name << " attacks "
				<< target << ", causing " 
				<< _attack_damage << " points of damage!" 
				<< std::endl;
	_energy_points -= 1;
}


void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points <= 0 || _energy_points <= 0)
	{
		std::cout	<< "ClapTrap " 
					<< getName() << " is out of energy " 
					<< std::endl;
		return ;
	}
	_attack_damage -= amount;
	if (amount > (unsigned int)_hit_points)
	{
		std::cout	<< "ClapTrap " 
					<< _name << " lost 1 life " 
					<< std::endl;
	}

	std::cout	<< "ClapTrap " 
				<< _name << " takes damage, loosing "
				<< amount << ", " 
				<< _attack_damage << " points of damage!" 
				<< std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{

	std::cout << amount << " " << _energy_points<< " " << _hit_points << std::endl;
	if (_hit_points == 10)
	{
		std::cout	<< "ClapTrap "
					<<	getName() << " has already full points" << std::endl;
	}
	else if (_energy_points && _hit_points && _hit_points < 10
		&& (amount > 0 && amount <= 10))
	{
		std::cout	<< "ClapTrap " 
					<< getName() << " earned " 
					<< amount << " points of energy"
					<< std::endl;
		_hit_points += amount;
		if (_hit_points > 10)
			_hit_points = 10;
		_energy_points -= 1;
	}
	else if (!_energy_points)
	{
		std::cout	<< "ClapTrap " 
					<< getName() << " is too weak to heal" << std::endl;
	}
	else
	{
		std::cout	<< "ClapTrap " 
					<< getName() << " is dead" << std::endl;
	}

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