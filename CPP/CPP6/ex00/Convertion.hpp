#ifndef CONVERTION_HPP
# define CONVERTION_HPP

// LIBS ========================================================================
# include <iostream>
# include <string>
# include <limits>
# include <climits>
# include <cmath>
// =============================================================================

// PROTOTYPES ==================================================================

// =============================================================================

// CLASS DEFINITIONS ===========================================================
class Convertion
{
	public:
		// Coplien
		Convertion();
		Convertion(Convertion const &);
		~Convertion();
		Convertion	operator=(Convertion const &);

		// Getter - Setter

        // Methodes
		void	checker(std::string &);
		void	convert_char(std::string &);

		// Exceptions
	private:
	char	_char;
	int		_int;
	double	_double;
	float	_float;


	bool	_char_overflow;
	bool	_int_overflow;
	double	_double_overflow;
	float	_float_overflow;

};
// =============================================================================

// FUNCTIONS SUP PROTOYPES =====================================================
// =============================================================================


#endif