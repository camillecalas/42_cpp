#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

template <typename T>
bool	easyfind(T a, int Tofind)
{
	if (std::find(a.begin(), a.end(), Tofind) != a.end())
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