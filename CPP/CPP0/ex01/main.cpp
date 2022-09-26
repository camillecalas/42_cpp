#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;

	PhoneBook	phonebook;
	std::string	input;

	while (1)
	{
		std::cout << "Phone Book : ADD |  EXIT | SEARCH" << std::endl;
		std::getline(std::cin, input);
		std::cout << input << std::endl;
		if (input.compare("ADD") == 0)
		{
			phonebook.ft_add();
		}
		else 
		if (input.compare("EXIT") == 0)
		{
			std::cout << "EXIT SUCCESS" << std::endl;
			return (0);
		}
		// else if(input.compare("SEARCH") == 0)
		// {

		// }
	}

	return (0);
}