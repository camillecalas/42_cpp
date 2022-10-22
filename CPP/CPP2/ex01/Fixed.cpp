#include "Fixed.hpp"
#include <cmath>

// Pour convertir en virgule fixe on le multiplie par 2^e (e etant le nombre de bits) donc dans ce cas 2^8= 256

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
//entier constant en paramètre et qui convertit celui-ci en virgule fixe
Fixed::Fixed(const int input) : _value(input * (1 << _nb_bits))
{
	std::cout << "Int constructor called" << std::endl;
}
//un flottant constant en paramètre et qui convertit celui-ci en virgule fixe
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
/* Une surcharge de l’opérateur d’insertion («) qui insère une représentation en vir-
gule flottante du nombre à virgule fixe dans le flux de sortie (objet output stream)
passé en paramètre */
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
// Convertit la valeur en virgule fixe en nombre à virgule flottante
// On divise par 256 ce qui revient a bitshift de 8 bits.
float	Fixed::toFloat( void ) const
{
	return (this->_value / (float)(1 << this->_nb_bits));
}
// Convertit la valeur en virgule fixe en nombre entier
int		Fixed::toInt( void ) const
{
	return (this->_value >> this->_nb_bits);
}
