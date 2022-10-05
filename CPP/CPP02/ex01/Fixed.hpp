#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &);
		Fixed(const int);
		Fixed(const float);
		~Fixed();

		Fixed &operator=(const Fixed &);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int	_value;
		static const int	_nb_bits;
};

std::ostream &operator<<(std::ostream &, const Fixed &);

#endif

/*
T (); // Constructeur par défaut
T (const T&); // Constructeur de recopie
~T (); // Destructeur éventuellement virtuel
T &operator=(const T&); // Operator d'affectation
*/