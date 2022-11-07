#include "iter.hpp"
#include <iostream>

int main( void ) {

	int 	a[5] = {2, 4, 5, 6, 7};
	char	b[5] = {'a', 'b', 'c', 'd', 'e'};

	for (int i = 0; i < 5; i++)
	{
		std::cout << "a[i] = " << a[i] << std::endl;
		std::cout << "b[i] = " << b[i] << std::endl;
	}
	::iter(a, 5, &toupper);
	return 0;
}