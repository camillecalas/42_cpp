#include <iostream>
#include <string>

template <typename T>
void iter(T *a, size_t size, void (*f)(T const &))
{
	for (size_t i = 0; i < size; i++)
	{
		f(a[i]);
	}
}

template <typename T>
void ft_print_a(T & a)
{
	std::cout << a << std::endl;
}
