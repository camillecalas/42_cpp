#include "MutantStack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template <typename T>
MutantStack<T>::MutantStack::MutantStack() : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack & src ) : std::stack<T>(src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template <typename T>
MutantStack<T>::~MutantStack()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
template <typename T>
MutantStack<T> & MutantStack<T>::operator=( MutantStack const & rhs )
{
	if ( this == &rhs )
		return (*this);
	this->c = rhs.c;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

// template <typename T>
// iterator MutantStack<T>::begin()
// {
// 	return (this->c.begin());
// }

// template <typename T>
// iterator MutantStack<T>::end()
// {
// 	return (this->c.end());
// }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */