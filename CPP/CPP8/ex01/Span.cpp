#include "Span.hpp"

/*
** --------------------------------- STATIC -----------------------------------
*/

// unsigned int Span::_counter(0);

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span(unsigned int N) : _N(N), _counter(0)
{

}

Span::Span( const Span & src )
{
	_N = src._N;
	for (size_t i = 0; i < _N; i++)
	{
		_tab[i] = src._tab[i];
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &	Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_N = rhs.getN();
		for (size_t i = 0; i < _N; i++)
		{
			_tab[i] = rhs._tab[i];
		}
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int number)
{
	if (_counter < _N)
	{
		_tab.push_back(number);
		_counter++;
	}
	else
		throw Span::TooManyNumber();
}

void	Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if ()
	_tab.insert(_tab.end(), start, end);
}

unsigned int	Span::shortestSpan()
{
	if (_tab.empty() || !_tab[1])
		throw Span::NotEnoughNumbers();
	sort(_tab.begin(), _tab.end());
	return ((_tab[1] - _tab[0]));
}

unsigned int	Span::longestSpan()
{
	if (_tab.empty() || !_tab[1])
		throw Span::NotEnoughNumbers();
	sort(_tab.begin(), _tab.end());
	return ((_tab[_N - 1] - _tab[0]));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int Span::getN() const
{
	return (_N);
}


const char * Span::TooManyNumber::what() const throw()
{
	return ("Span::TooManyNumbersAlready");
}

const char * Span::NotEnoughNumbers::what() const throw()
{
	return ("Span::NotEnoughNumbers");
}


/* ************************************************************************** */