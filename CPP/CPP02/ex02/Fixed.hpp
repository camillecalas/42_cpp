#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &);
		Fixed(const int);
		Fixed(const float);
		~Fixed();

		Fixed	&operator=(Fixed const &);
		//Operateur de comparaison
		bool	operator>(Fixed const &);
		bool	operator>=(Fixed const &);
		bool	operator<(Fixed const &);
		bool	operator<=(Fixed const &);
		bool	operator==(Fixed const &);
		bool	operator!=(Fixed const &);
		//Operateur arithmetiques
		Fixed	operator+(Fixed const &);
		Fixed	operator-(Fixed const &);
		Fixed	operator*(Fixed const &);
		Fixed	operator/(Fixed const &);


		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int	_value;
		static const int	_nb_bits;
};

std::ostream &operator<<(std::ostream &, Fixed const &);

#endif

/*
T (); // Constructeur par défaut
T (const T&); // Constructeur de recopie
~T (); // Destructeur éventuellement virtuel
T &operator=(const T&); // Operator d'affectation
*/