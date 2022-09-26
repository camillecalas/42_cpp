#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook 
{

	public:

		PhoneBook(char p1, int p2, float p3); //constructeur
		~PhoneBook(void); //destructeur

		/* METHODES */
		void	ft_add(void);
		void	ft_search(void);
		void	ft_exit(void);

	private:
		/* ATTRIBUTS Encapsulation : tous les attributs d'une classe doivent toujours être privés.*/
		Contact _contact_tab[8];
};


#endif

/* Les classes sont des plans (ex: plans d'architectes), les objets sont le resultats (ex: les maisons)