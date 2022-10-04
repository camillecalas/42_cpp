#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook 
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		/* METHODES */
		void	ft_add(void);
		void	ft_search(void);

	private: 
		Contact	_contacts_tab[8];
		int		_nb_contact;
		int		_idx;
		void	_print_preview(int index, std::string, std::string, std::string) const;
		void	_print_elem(std::string) const;
};

#endif
