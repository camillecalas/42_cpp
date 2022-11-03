#include "Convertion.hpp"
#include <string>

int	main(int ac, char **av)
{

	if (ac != 2)
	{
		std::cout << "This program takes 1 arguments\n";
		return (1);
	}

	std::string	str = av[1];
	if (str.empty())
	{
		std::cout << "This argument is empty\n";
		return (1);
	}
	Convertion A(str);
	A.print();



	return (0);
}