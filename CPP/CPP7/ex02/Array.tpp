#include "Array.hpp"

// ============================================================
// CONSTRUCTORS ===============================================

template <typename T>
Array<T>::Array() : _rawArray(0), _size(0)
{
	_rawArray = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int size) : _rawArray(0), _size(size)
{
	_rawArray = new T[_size];
	for (unsigned int i = 0; i < _size; i++) {
		_rawArray[i] = 0;
	}
}

template <typename T>
Array<T>::Array(Array const &copy)
{
	_size = copy._size;
	_rawArray = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
	{
		_rawArray[i] = copy._rawArray[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	if (_rawArray != NULL)
	{
		delete[]_rawArray;
		_rawArray = 0;
	}
}

template <typename T>
Array<T> & Array<T>::operator=(Array const &rhs)
{
	if (this == &rhs)
		return (*this);
	delete[]_rawArray;
	_size = rhs._size;
	_rawArray = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
	{
		_rawArray[i] = rhs._rawArray[i];
	}
	return (*this);
}

template <typename T>
T & Array<T>::operator[](unsigned int pos) const
{
	if (pos >= _size)
		throw Array<T>::OutofRange();
	return (_rawArray[pos]);
}

// ============================================================
// METHODES ===================================================
template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}

// ============================================================
// EXCEPTIONS =================================================
template <typename T>
const char *Array<T>::OutofRange::what() const throw()
{
	return ("Array::OutofRangeException\n");
}
