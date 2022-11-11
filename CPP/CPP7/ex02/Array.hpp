#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{

	public:
		Array();
		Array(size_t size);
		Array (Array const &);
		~Array();

		Array &		operator=(Array const &);
		T &			operator[](size_t pos);
		const T &	operator[](size_t pos)const;

		//Getters
		size_t size() const;

		class OutofRange : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

	private:
		T *		_rawArray;
		size_t 	_size;
};


#endif