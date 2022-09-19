#include <iostream>

void	ft_print_uppercase(char *str)
{
	for (int i = 0; str[i]; i++)
		std::cout << (char)std::toupper(str[i]);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
			ft_print_uppercase(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}