#include "Convertion.hpp"

// FONCTIONS ===================================================================

static bool	isInteger(std::string &str)
{
	int i = 0;
	if (str.length() > 0)
	{
		if (str[0] == '-' || str[0] == '+')
			i++;
	}
	while (i < (int)str.length())
	{
		if (isdigit(str[i]) == false)
			return (false);
		i++;
	}
	return (true);
}

static bool	isChar(std::string &str)
{
	if (str.length() == 1 && std::isprint(str[0]))
		return (true);
	return (false);
}

static bool isDouble(std::string &str)
{
	int	sawDot = 0;

	if (!std::isdigit(str[0]) && str[0] != '-' && str[0] != '+')
		return (false);
	for (int i = 1; i < ((int)str.length()); i++)
	{
		if (!(std::isdigit(str[i])  || (str[i] == '.' && !sawDot)))
			return (false);
		sawDot = sawDot || (str[i] == '.');
	}
	return (true);
}

static bool isFloat(std::string &str)
{
	int	sawDot = 0;

	if ((!std::isdigit(str[0]) && str[0] != '-' && str[0] != '+'))
		return (false);
	if ( str[str.length() - 1] != 'f')
		return (false);
	for (int i = 1; i < ((int)str.length() - 1); i++)
	{
		if (!(std::isdigit(str[i])  || (str[i] == '.' && !sawDot)))
			return (false);
		sawDot = sawDot || (str[i] == '.');
	}
	return (true);
}

// =============================================================================
// CONSTRUCTORS ================================================================

Convertion::Convertion() :	_char('0'), _int(0), _double(0.0), _float(0.0f), 
							_inff(false), _plus_inff(false), _minus_inff(false), _nanf(false),
							_char_overflow(false), _int_overflow(false), _double_overflow(false), _float_overflow(false), _error(false)
{
}

bool	Convertion::pseudo_litteral(std::string & str)
{
	if (str.compare("inff") == 0 || str.compare("inf") == 0)
		return (true);
	else if (str.compare("-inff") == 0 || str.compare("-inf") == 0)
		return (true);
	else if (str.compare("+inff") == 0 || str.compare("+inf") == 0)
		return (true);
	else if (str.compare("nan") == 0 || str.compare("nanf") == 0)
		_nanf = true;
	if (_inff == true || _minus_inff == true || _plus_inff == true || _nanf == true)
		return (true);
	return (false);
}

Convertion::Convertion(std::string & str) : _inff(false), _plus_inff(false), _minus_inff(false), _nanf(false),
											_char_overflow(false), _int_overflow(false), _double_overflow(false), _float_overflow(false), _error(false)
											
{
	std::cout << "Surcharged Constructor\n";

	if (pseudo_litteral(str) == true)
		return ;
	else if (isInteger(str))
	{
		std::cout << "isInt\n";
		convert_int(str);
	}
	else if (isChar(str))
	{
		std::cout << "isChar\n";
		convert_char(str);
	}
	else if (isDouble(str))
	{
		std::cout << "isDouble\n";
		convert_double(str);
	}
	else if (isFloat(str))
	{
		std::cout << "isFloat\n";
		convert_float(str);
	}
	else	
		_error = true;
}

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
	_char = rhs._char;
	_int = rhs._int;
	_double = rhs._double;
	_float = rhs._float;
	return (*this);
}

// =============================================================================
// METHODES ====================================================================

//! CONVERT  ====================================
void	Convertion::checker(std::string &str)
{
	double	nb;

	//convert a string to a floating point number
	nb = strtod(str.c_str(), NULL);
	if (errno == 0)
	{
		if (nb < CHAR_MIN || nb > CHAR_MAX)
			_char_overflow = true;
		if (nb < INT_MIN || nb > INT_MAX)
			_int_overflow = true;
		if (nb < __FLT_MIN__|| nb > __FLT_MAX__)
			_float_overflow = true;
	}
}

void	Convertion::convert_char(std::string &str)
{
	checker(str);
	_char = str[0];
	_int = static_cast<int>(_char);
	_double = static_cast<double>(_char);
	_float = static_cast<float>(_char);
}

void	Convertion::convert_int(std::string &str)
{
	long	nb;
	checker(str);
	nb = atol(str.c_str());
	if (nb < INT_MIN || nb > INT_MAX)
		_error = true;
	else
	{
		_int = atoi(str.c_str());
		_char = static_cast<char>(_int);
		_double = static_cast<double>(_int);
		_float = static_cast<float>(_int);
	}

}

void	Convertion::convert_float(std::string &str)
{
	checker(str);
	_float = strtof(str.c_str(), NULL);
	if (errno == ERANGE)
		_error = true;
	else
	{
		_int = static_cast<int>(_float);
		_char = static_cast<char>(_float);
		_double = static_cast<double>(_float);
	}
}

void	Convertion::convert_double(std::string &str)
{
	checker(str);
	_double = strtod(str.c_str(), NULL);
	if (errno != 0)
		_error = true;
	else
	{
		_int = static_cast<int>(_double);
		_char = static_cast<char>(_double);
		_float = static_cast<float>(_double);
	}
}

//! ==========================================
//! PRINT ====================================

void	Convertion::print_float() const
{
	if (_int_overflow || _error)
		std::cout << "impossible\n";
	else if (_minus_inff)
		std::cout << "-inff\n";
	else if (_plus_inff )
		std::cout << "+inff\n";
	else if (_inff)
		std::cout <<"inff\n";
	else if(_nanf)
		std::cout << "nanf\n"; 
	else
		std::cout << _float << "f" << std::endl;
}

void	Convertion::print_double() const
{
	if (_int_overflow || _error)
		std::cout << "impossible\n";
	else if (_minus_inff)
		std::cout << "-inf\n";
	else if (_plus_inff )
		std::cout << "+inf\n";
	else if (_inff)
		std::cout <<"inf\n";
	else if(_nanf)
		std::cout << "nan\n"; 
	else
		std::cout << std::setiosflags(std::ios_base::dec) << _double << std::endl;
}

void	Convertion::print_int() const
{
	if (_minus_inff || _plus_inff || _inff || _nanf || _int_overflow || _error)
		std::cout << "impossible\n";
	else
		std::cout << _int << std::endl;
}

void	Convertion::print_char() const
{
	if (_minus_inff || _plus_inff || _inff || _nanf ||_error || _char_overflow)
		std::cout << "impossible\n";
	else if (!std::isprint(static_cast<int>(_char)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << _char << std::endl;
}

void	Convertion::print(void) const
{
	std::cout << "char: ";
	print_char();
	std::cout << "int: ";
	print_int();
	std::cout << "float: ";
	print_float();
	std::cout << "double: ";
	print_double();
}


// =============================================================================
// EXEPTIONS ===================================================================
const char *Convertion::ImpossibleConvertion::what() const throw()
{
	return ("Convertion::ImpossibleConvertion\n");
}