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

void	PhoneBook::ft_search()
{
	int	index;
	std::string input;

	if (_nb_contact == 0)
	{
		std::cout << "No contact found" << std::endl;
		return ;
	}
	std::cout << "Which index are you looking for ? ";
	std::cin >> index;
	std::cin >> input;
	std::cout << "index = " << index << std::endl;
	std::cout << "input = " << input << std::endl;

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


