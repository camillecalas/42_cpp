#include "PhoneBook.hpp"
#include "Contact.hpp"
# include <iostream>
#include <string>
#include <iomanip>

/*********** CONSTRUCTOR | DESTRUCTOR ***********/
PhoneBook::PhoneBook()
{
	_nb_contact = 0;
	_idx = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

/************************ METHODES ************************/
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


void	PhoneBook::_print_elem(std::string str) const
{
	if (str.size() > 10)
		std::cout << str.substr(0, 10 - 1) << ".";
	else
		std::cout << std::setw(10) << str;
}

void	PhoneBook::_print_preview(int index, std::string name, std::string last_name, std::string nickname) const
{
	std::cout << "|";
	std::cout << std::setw(10) << index;;
	std::cout << "|";
	_print_elem(name);
	std::cout << "|";
	_print_elem(last_name);
	std::cout << "|";
	_print_elem(nickname);
	std::cout << "|";
	std::cout << std::endl;
}

void	PhoneBook::ft_search()
{
	int	index;
	int	i;
	std::string input;
	std::string str;

	i = 0;
	if (_nb_contact >= 8)
		_nb_contact = 8;
	else if (_nb_contact == 0)
	{
		std::cout << "No contact found" << std::endl;
		return ;
	}
	while (i < _nb_contact)
	{
		std::cout << "|     Index" << "|First Name" << "| Last name" << "|  Nickname|"<< std::endl;
		_print_preview(i, _contacts_tab[i].get_first_name(), _contacts_tab[i].get_last_name(), _contacts_tab[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
	std::cout << "Which index are you looking for ? ";
	std::cin >> index;
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
