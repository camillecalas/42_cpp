#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

template <typename T>
bool	easyfind(T a, int b)
{
	if (std::find(a.begin(), a.end(), b) != a.end())
	{
		std::cout << "FOUND\n";
		return (true);
	}
	else
	{
		std::cout << "NOT FOUND\n";
		return (false);
	}
}

#endif