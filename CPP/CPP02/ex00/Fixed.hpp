#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &);
		~Fixed();

		Fixed &operator=(Fixed const &);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int	_value;
		static const int	_nb_bits;
};

#endif

/*
T (); // Constructeur par défaut
T (const T&); // Constructeur de recopie
~T (); // Destructeur éventuellement virtuel
T &operator=(const T&); // Operator d'affectation
*/