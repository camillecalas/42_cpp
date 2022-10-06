#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
// #include "PhoneBook.hpp"

class Contact 
{
	public:
		Contact(void);
		~Contact(void);
		std::string	get_first_name();
		std::string	get_last_name();
		std::string get_nickname();
		std::string get_darkest_secret();
		std::string	get_phone_number();
		
		void		set_first_name(std::string);
		void		set_last_name(std::string);
		void		set_nickname(std::string);
		void		set_darkest_secret(std::string);
		void		set_phone_number(std::string);

	private:
		std::string _first_name;
		std::string _last_name;
		std::string	_nickname;
		std::string _darkest_secret;
		std::string	_phone_number;
};

#endif