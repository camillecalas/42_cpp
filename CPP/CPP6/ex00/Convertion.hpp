#ifndef CONVERTION_HPP
# define CONVERTION_HPP

// LIBS ========================================================================
# include <iostream>
# include <string>
# include <limits>
# include <climits>
# include <cmath>
# include <cerrno>
# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <limits.h>
# include <limits>
# include <float.h>
# include <errno.h>
# include <sstream>

// =============================================================================

// PROTOTYPES ==================================================================

// =============================================================================

// CLASS DEFINITIONS ===========================================================
class Convertion
{
	public:
		// Coplien
		Convertion();
		Convertion(std::string &);
		Convertion(Convertion const &);
		~Convertion();
		Convertion	operator=(Convertion const &);

		// Getter - Setter

        // Methodes
		void	checker(std::string &);
		void	convert_char(std::string &);
		void	convert_int(std::string &);
		void	convert_float(std::string &str);
		void	convert_double(std::string &str);

		bool	pseudo_litteral(std::string & str);

		void	print(void) const;
		void	print_char(void) const;
		void	print_int() const;
		void	print_float() const;
		void	print_double() const;

		// static bool	isInteger(std::string &str);
		// static bool isChar(std::string &str);
		// static bool isDouble(std::string &str);

		// Exceptions
		class ImpossibleConvertion : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};


	private:
		char	_char;
		int		_int;
		double	_double;
		float	_float;

		bool	_inff;
		bool	_plus_inff;
		bool	_minus_inff;
		bool	_nanf;




		bool	_char_overflow;
		bool	_int_overflow;
		bool	_double_overflow;
		bool	_float_overflow;

		bool	_error;
};
// =============================================================================

// FUNCTIONS SUP PROTOYPES =====================================================
// =============================================================================


#endif