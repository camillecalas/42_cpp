#include "Contact.hpp"
#include "PhoneBook.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

/************************ METHODES ************************/
std::string	Contact::get_first_name(void)
{
	return (_first_name);
}

std::string	Contact::get_last_name(void)
{
	return (_last_name);
}

std::string	Contact::get_nickname(void)
{
	return (_nickname);
}

std::string	Contact::get_darkest_secret(void)
{
	return (_darkest_secret);
}

std::string	Contact::get_phone_number(void)
{
	return (_phone_number);
}
/*************************************************************/
void	Contact::set_first_name(std::string first_name)
{
	_first_name.assign(first_name);
}

void	Contact::set_last_name(std::string last_name)
{
	_last_name.assign(last_name);
}

void	Contact::set_nickname(std::string nickname)
{
	_nickname.assign(nickname);
}

void	Contact::set_darkest_secret(std::string darkest_secret)
{
	_darkest_secret.assign(darkest_secret);
}

void	Contact::set_phone_number(std::string phone_number)
{
	_phone_number.assign(phone_number);
}
