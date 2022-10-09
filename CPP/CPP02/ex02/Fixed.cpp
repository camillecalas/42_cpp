#include "Fixed.hpp"
#include <cmath>

/*********** CONSTRUCTOR | DESTRUCTOR ***********/
Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int input) : _value(input * (1 << _nb_bits))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float input) : _value((int)roundf(input * ( 1 << _nb_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/************************* OPERATORS OVERLOAD *************************/
Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "Copy assignment operator called" << std::endl;
	_value = rhs._value;
	return (*this);
}
//Comparaison
bool	Fixed::operator>(Fixed const &rhs)
{
	return (_value > rhs._value);
}
bool	Fixed::operator>=(Fixed const &rhs)
{
	return (_value >= rhs._value);
}
bool	Fixed::operator<(Fixed const &rhs)
{
	return (_value < rhs._value);
}
bool	Fixed::operator<=(Fixed const &rhs)
{
	return (_value > rhs._value);
}
bool	Fixed::operator==(Fixed const &rhs)
{
	return (_value > rhs._value);
}
bool	Fixed::operator!=(Fixed const &rhs)
{
	return (_value > rhs._value);
}

//Arithmetiques
Fixed	Fixed::operator+(Fixed const &rhs)
{
	return (_value + rhs._value);
}
Fixed	Fixed::operator-(Fixed const &rhs)
{
	return (_value - rhs._value);
}
Fixed	Fixed::operator*(Fixed const &rhs)
{
	return (_value * rhs._value);
}
Fixed	Fixed::operator/(Fixed const &rhs)
{
	return (_value / rhs._value);
}

std::ostream &operator<<(std::ostream & os, Fixed const & obj)
{
	os << obj.toFloat();
	return (os);
}

/************************ ATTRIBUTS ************************/
const int	Fixed::_nb_bits = 8;

/************************ METHODES ************************/
int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" <<std::endl;
	return (_value);
}
void	Fixed::setRawBits( int const raw )
{
	_value = raw;
	return ;
}

float	Fixed::toFloat( void ) const
{
	return (this->_value / (float)(1 << this->_nb_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->_value >> this->_nb_bits);
}
