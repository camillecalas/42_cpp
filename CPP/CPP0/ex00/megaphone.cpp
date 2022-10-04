#include <iostream>
#include <cstring>

void	ft_print_uppercase(char *str)
{
	for (int i = 0; str[i]; i++)
		std::cout << (char)std::toupper(str[i]);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
	else
	{
		while (i < argc)
		{
			ft_print_uppercase(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}