#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class phoneBook 
{

	public:

		char	a1;
		int		a2;
		float	a3; /* attributs */

		phoneBook(char p1, int p2, float p3); //constructeur
		~phoneBook(void); //destructeur

	private:
		int	_private_nb;

		void	_private_func(void) const;

};


#endif