#include "Convertion.hpp"

// CONSTRUCTORS ================================================================
Convertion::Convertion() :	_char('0'), _int(0), _double(0), _float(0), 
				_char_overflow(false), _int_overflow(false), _double_overflow(false), _float_overflow(false)
{}

Convertion::Convertion(Convertion const & copy)
{
	*this = copy;
}

Convertion::~Convertion()
{}

Convertion	Convertion::operator=(Convertion const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

// =============================================================================
// METHODES ====================================================================
void	Convertion::checker(std::string &str)
{
	double	nb;
	nb = strtod(str.c_str(), NULL);

	if (errno == NULL)
	{
		if (nb < CHAR_MIN || nb > CHAR_MAX)
			_char_overflow = true;
		if (nb < INT_MIN || nb > INT_MAX)
			_int_overflow = true;
		if (nb < LONG_MIN || nb > LONG_MAX)
			_double_overflow(true);
	}
}

void	Convertion::convert_char(std::string &str)
{
	_char = str[0];
	_int = static_cast<int>(_char);
	_double = static_cast<double>(_char);
	_float = static_cast<float>(_char);
}
