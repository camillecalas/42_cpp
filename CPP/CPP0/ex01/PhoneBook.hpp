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

	private: /* ATTRIBUTS Encapsulation : tous les attributs d'une classe doivent toujours être privés.*/
		Contact	_contacts_tab[8];
		int		_nb_contact;
		int		_idx;
		void	_print_preview(int index, std::string, std::string, std::string);
		void	_print_elem(std::string);
};

#endif

/* Les classes sont des plans (ex: plans d'architectes), les objets sont le resultats (ex: les maisons) */