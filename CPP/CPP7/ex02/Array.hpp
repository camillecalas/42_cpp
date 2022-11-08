#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{

	public:
		Array();
		Array(unsigned int size);
		Array (Array const &);
		~Array();
		Array & operator=(Array const &);

		T & operator[](unsigned int pos) const;
		//Getters
		
		unsigned int size() const;

		class OutofRange : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

	private:
		T *				_rawArray;
		unsigned int 	_size;
};

// // ============================================================
// // CONSTRUCTORS ===============================================

// template <typename T>
// Array<T>::Array() : _rawArray(NULL), _size(0) 
// {
// 	_rawArray = new T(0);
// }

// template <typename T>
// Array<T>::Array(unsigned int size) : _rawArray(0), _size(size)
// {
// 	_rawArray = new T(size);
// 	for (unsigned int i = 0; i < size; i++) {
// 		_rawArray[i] = 0;
// 	}
// }

// template <typename T>
// Array<T>::Array(Array const &copy)
// {
// 	*this = copy;
// }


// template <typename T>
// Array<T>::~Array()
// {
// 	if (_rawArray != NULL)
// 		delete (_rawArray);
// 	_rawArray = 0;
// }

// template <typename T>
// Array<T> & Array<T>::operator=(Array const &rhs)
// {
// 	std::cout << "ici\n";
// 	if (_rawArray != NULL)
// 		delete(_rawArray);
// 	if (rhs.size() != 0)
// 	{
// 		_size = rhs._size;
// 		_rawArray = new T(_size);
// 		for (int i = 0; i < _size; i++)
// 		{
// 			_rawArray[i] = rhs._rawArray[i];
// 		}
// 	}
// 	return (*this);
// }

// // ============================================================
// // METHODES ===================================================

// template <typename T>
// unsigned int Array<T>::size() const
// {
// 	return (_size);
// }

#endif