#include "Fixed.hpp"

/*********** CONSTRUCTOR | DESTRUCTOR ***********/
Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "Copy assignment operator called" << std::endl;
	_value = rhs.getRawBits();
	//return l'objet copie
	return (*this);
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