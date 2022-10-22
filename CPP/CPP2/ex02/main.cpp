#include <iostream>
#include "Fixed.hpp"

int	main( void )
{


	Fixed	a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	// Fixed	c(a);
	Fixed	c = 2;
	Fixed	d = 189;
	Fixed	e = 189;
	Fixed	x = 1;


	//rawBits
	// Fixed	i(0);
	// std::cout << i << std::endl;
	// std::cout << "++i " << ++i << std::endl;
	// std::cout<< "*************"<<std::endl;
	// Fixed	j(1);
	// std::cout << j << std::endl;
	// std::cout << "++j " << ++j << std::endl;
	// std::cout << "++j " << ++j << std::endl;
	// std::cout<< "*************"<<std::endl;
	// Fixed	k(1.4f);
	// std::cout << k << std::endl;
	// std::cout << "++k " << ++k << std::endl;
	

	// test arithmetique :
	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "c / d = " << c / d << std::endl;
	std::cout << "******************" << std::endl;

	//test comparaisons :
	std::cout << "d < c : ";
	if (d < c)
		std:: cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	std::cout << "d > c : ";
	if (d > c)
		std:: cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	std::cout << "d >= c : ";
	if (d >= c)
		std:: cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	std::cout << "d <= c : ";
	if (d <= c)
		std:: cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	std::cout << "d == e : ";
	if (d == e)
		std:: cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
		
	std::cout << "d != e : ";
	if (d != e)
		std:: cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << "******************" << std::endl;

	//test incrementation :
	std::cout << "x = " << x << std::endl;
	std::cout << "++x = " << ++x << std::endl;
	std::cout << "++x = " << ++x << std::endl << std::endl;
	x = 1;
	std::cout << "x = " << x << std::endl;
	std::cout << "x++ = " << x++ << std::endl;
	std::cout << "x++ = " << x++ << std::endl;

	std::cout << "******************" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

	// Fixed a;
	// Fixed const b(10);
	// Fixed const c(42.42f);
	// Fixed const d(b);

	// std::cout << "OPERATOR OVERLOAD \"=\"" << std::endl;

	// Fixed test;
	
	// std::cout << "Before assignment : " << test << std::endl;
	// test = c;
	// std::cout << "After assignment : " << test << std::endl;
	

	// std::cout << std::endl << "OPERATOR OVERLOAD \">\"" << std::endl;
	// std::cout << "is c(~42) bigger than b(10) : " << ((Fixed&)c > b) << std::endl;
	// std::cout << "OPERATOR OVERLOAD \"<\"" << std::endl;
	// std::cout << "is c(~42) smaller than b(10) : " << ((Fixed&)c < b) << std::endl;
	// std::cout << "OPERATOR OVERLOAD \">=\"" << std::endl;
	// std::cout << "is c(~42) smaller than or egual to b(10) : " << ((Fixed&)c <= b) << std::endl;
	// std::cout << "OPERATOR OVERLOAD \"<=\"" << std::endl;
	// std::cout << "is c(~42) bigger than or egual to b(10) : " << ((Fixed&)c >= b) << std::endl;
	// std::cout << "OPERATOR OVERLOAD \"==\"" << std::endl;
	// std::cout << "is c(~42) egual to b(10) : " << ((Fixed&)c == b) << std::endl;
	// std::cout << "OPERATOR OVERLOAD \"!=\"" << std::endl;
	// std::cout << "is c(~42) different from b(10) : " << ((Fixed&)c != b) << std::endl;
	// std::cout << "OPERATOR OVERLOAD \"+\"" << std::endl;
	// std::cout << "c(~42) + b(10) = " << ((Fixed&)c + b) << std::endl;
	// std::cout << "OPERATOR OVERLOAD \"-\"" << std::endl;
	// std::cout << "c(~42) - b(10) = " << ((Fixed&)c - b) << std::endl;
	// std::cout << "OPERATOR OVERLOAD \"*\"" << std::endl;
	// std::cout << "c(~42) * b(10) = " << ((Fixed&)c * b) << std::endl;
	// std::cout << "OPERATOR OVERLOAD \"/\"" << std::endl;
	// std::cout << "c(~42) / b(10) = " << ((Fixed&)c / b) << std::endl;

	// std::cout << std::endl << "OPERATOR OVERLOAD \"++\" PRE" << std::endl;

	// std::cout << "before incrementation" << std::endl;
	// std::cout << test << std::endl;
	// std::cout << "during incrementation" << std::endl;
	// std::cout << ++test << std::endl;
	// std::cout << "after incrementation" << std::endl;
	// std::cout << test << std::endl;

	// std::cout << std::endl << "OPERATOR OVERLOAD \"--\" PRE" << std::endl;

	// std::cout << "before incrementation" << std::endl;
	// std::cout << test << std::endl;
	// std::cout << "during incrementation" << std::endl;
	// std::cout << --test << std::endl;
	// std::cout << "after incrementation" << std::endl;
	// std::cout << test << std::endl;

	// std::cout << std::endl << "OPERATOR OVERLOAD \"++\" POST" << std::endl;

	// std::cout << "before incrementation" << std::endl;
	// std::cout << test << std::endl;
	// std::cout << "during incrementation" << std::endl;
	// std::cout << test++ << std::endl;
	// std::cout << "after incrementation" << std::endl;
	// std::cout << test << std::endl;

	// std::cout << std::endl << "OPERATOR OVERLOAD \"--\" POST" << std::endl;

	// std::cout << "before incrementation" << std::endl;
	// std::cout << test << std::endl;
	// std::cout << "during incrementation" << std::endl;
	// std::cout << test-- << std::endl;
	// std::cout << "after incrementation" << std::endl;
	// std::cout << test << std::endl;

	// std::cout << std::endl << "MIN FUNCTION" << std::endl;
	// std::cout << "min(c, b) = " << Fixed::min(c, b) << std::endl;

	// std::cout << std::endl << "MAX FUNCTION" << std::endl;
	// std::cout << "min(c, b) = " << Fixed::max(c, b) << std::endl;
