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

	std::cout << "*** Phone Book : ADD |  EXIT | SEARCH ***" << std::endl;
	while (1)
	{
		std::cout << "> ";
		std::cin.clear();
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			phonebook.ft_add();
		else if(input.compare("SEARCH") == 0)
			phonebook.ft_search();
		else if (std::cin.eof() || input.compare("EXIT") == 0)
		{
			std::cout << "EXIT SUCCESS" << std::endl;
			return (0);
		}
	}

	return (0);
}