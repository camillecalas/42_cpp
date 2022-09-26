#include "PhoneBook.hpp"
#include "Contact.hpp"

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
// std::string	ft_get_input(void)
// {
// 	std::string input;
// 	std::getline(std::cin, input);
// 	return (input);
// }
void	PhoneBook::ft_add()
{
	std::string	input;

	std::cout << _idx << " first name = " ;
	std::getline(std::cin, input);
	_contacts_tab[_idx].set_first_name(input);
	std::cout << _idx << " last name = " ;
	input.erase();
	std::getline(std::cin, input);
	_contacts_tab[_idx].set_last_name(input);


	std::cout << _contacts_tab[0].get_first_name();
	std::cout << _contacts_tab[0].get_last_name();

}

