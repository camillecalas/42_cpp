#include <iostream>
#include <string>

template <typename T>
void 
iter(T *a, int size, void (*f)(T const &))
{
	for (int i = 0; i < size; i++)
	{
		f(a[i]);
	}
}