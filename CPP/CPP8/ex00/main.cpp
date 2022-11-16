#include "easyfind.hpp"


int	main()
{
	std::vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	
	std::vector<char> arr2;
	arr2.push_back('a');
	arr2.push_back('b');
	arr2.push_back('c');

	easyfind(arr, 2);
	easyfind(arr, -2);

	easyfind(arr2, 'd');

	return (0);
}
