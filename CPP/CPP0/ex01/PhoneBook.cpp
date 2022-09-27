#include "PhoneBook.hpp"
#include "Contact.hpp"
# include <iostream>

/*********** CONSTRUCTOR | DESTRUCTOR ***********/
PhoneBook::PhoneBook()
{
	std::cout << "Constructor PhoneBook" << std::endl;
	_nb_contact = 0;
	_idx = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor PhoneBook " << std::endl;
	return ;
}

/************************ METHODES ************************/
std::string	ft_get_input(void)
{
	std::string input;
	std::getline(std::cin, input);
	return (input);
}

void	PhoneBook::ft_add()
{
	std::string	input;
	if (_idx == 8)
		_idx = 0;

	std::cout << _idx << " First name : " ;
	std::getline(std::cin, input);
	_contacts_tab[_idx].set_first_name(input);
	do
	{
		std::cout << _idx << " Last name : " ;
		std::getline(std::cin, input);
		_contacts_tab[_idx].set_last_name(input);
	} while (input.empty());
	do
	{
		std::cout << _idx << " Nickname : " ;
		std::getline(std::cin, input);
		_contacts_tab[_idx].set_nickname(input);
	} while (input.empty());
	do
	{
		std::cout << _idx << " Darkest secret : " ;
		std::getline(std::cin, input);
		_contacts_tab[_idx].set_darkest_secret(input);
	} while (input.empty());
	do
	{
	std::cout << _idx << " Phone number : " ;
	std::getline(std::cin, input);
	_contacts_tab[_idx].set_phone_number(input);
	} while (input.empty());
	_nb_contact++;
	_idx++;
}

void	ft_under_ten(int size)
{
	int	i;
	int	x;

	x = 10 - size;
	i = 0;
	while (i < x)
	{
		std::cout << " ";
		i++;
	}

	
}

void	PhoneBook::ft_search()
{
	int	index;
	int	i;
	std::string input;

	if (_nb_contact == 0)
	{
		std::cout << "No contact found" << std::endl;
		return ;
	}
	i = 0;
	while (i < _nb_contact)
	{
		int size_name;
		int	size_last;
		int	size_nickname;
		std::string str;

		size_name = _contacts_tab[i].get_first_name().size();
		size_last = _contacts_tab[i].get_last_name().size();
		size_nickname = _contacts_tab[i].get_nickname().size();

		std::cout << "|    Index" << "|First Name" << "| Last name" << "|  Nickname|"<< std::endl;
		std::cout << "|        " << i << "|";
		if (size_name < 10)
		{
			ft_under_ten(size_name);
			std::cout << _contacts_tab[i].get_first_name() << "|";
		}
		else if (size_name > 10)
		{
			str = _contacts_tab[i].get_first_name().erase(9);
			str.push_back('.');
			std:: cout << str << "|";
		}

		if (size_last < 10)
		{
			ft_under_ten(size_last);
			std::cout << _contacts_tab[i].get_last_name() << "|";
		}
		else if (size_last > 10)
		{
			str.erase();
			std::string str;
			str = _contacts_tab[i].get_last_name().erase(9);
			str.push_back('.');
			std:: cout << str << "|";
		}

		if (size_nickname < 10)
		{
			ft_under_ten(size_nickname);
			std::cout << _contacts_tab[i].get_nickname() << "|";
		}
		else if (size_nickname > 10)
		{
			str.erase();
			std::string str;
			str = _contacts_tab[i].get_nickname().erase(9);
			str.push_back('.');
			std:: cout << str << "|";
		}
		std::cout << std::endl;
	
		i++;
	}


	std::cout << "Which index are you looking for ? ";
	std::cin >> index;
	// std::cin >> input;
	// std::cout << "index = " << index << std::endl;
	// std::cout << "input = " << input << std::endl;

	if (!std::cin || (index < 0 || index > (_nb_contact - 1)) )
	{
		std::cout << "Index not found" << std::endl;
		return ;
	}
	else
	{
		std::cout << index << " First name : " << _contacts_tab[index].get_first_name() << std::endl;
		std::cout << index << " Last name : " << _contacts_tab[index].get_last_name() << std::endl;
		std::cout << index << " Nickname : " << _contacts_tab[index].get_nickname() << std::endl;
		std::cout << index << " Darkest secret : " << _contacts_tab[index].get_darkest_secret() << std::endl;
		std::cout << index << " Phone number : " << _contacts_tab[index].get_phone_number() << std::endl;
	}
}


