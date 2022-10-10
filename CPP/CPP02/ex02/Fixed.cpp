#include "Fixed.hpp"
#include <cmath>

/*********** CONSTRUCTOR | DESTRUCTOR ***********/
Fixed::Fixed(void) : _value(0)
{
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::Fixed(const int input) : _value(input * (1 << _nb_bits))
{
}

Fixed::Fixed(const float input) : _value((int)roundf(input * ( 1 << _nb_bits)))
{
}

Fixed::~Fixed()
{
	return ;
}

/************************* OPERATORS OVERLOAD *************************/
Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this == &rhs)
		return (*this);
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
	return (_value <= rhs._value);
}
bool	Fixed::operator==(Fixed const &rhs)
{
	return (_value == rhs._value);
}
bool	Fixed::operator!=(Fixed const &rhs)
{
	return (_value != rhs._value);
}

//Arithmetiques
Fixed	Fixed::operator+(Fixed const &rhs)
{
	return (this->toFloat() + rhs.toFloat());
}
Fixed	Fixed::operator-(Fixed const &rhs)
{
	return (this->toFloat() - rhs.toFloat());
}
Fixed	Fixed::operator*(Fixed const &rhs)
{
	return (this->toFloat() * rhs.toFloat());
}
Fixed	Fixed::operator/(Fixed const &rhs)
{
	return (this->toFloat() / rhs.toFloat());
}



//Incrementation
Fixed	&Fixed::operator++(void)
{	
	_value++;
	return (*this);
}
Fixed	&Fixed::operator--(void)
{
	_value--;
	return (*this);
}
Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return (temp);
}
Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return (temp);
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
	return (_value);
}
void	Fixed::setRawBits( int const raw )
{
	_value = raw;
	return ;
}

float	Fixed::toFloat( void ) const
{
	return ((float)_value / (1 << _nb_bits));
}

int		Fixed::toInt( void ) const
{
	return ((_value / (1 << _nb_bits)));
}


Fixed &	Fixed::min(Fixed & a, Fixed & b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}
const Fixed &	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}
Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}
const Fixed &	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}