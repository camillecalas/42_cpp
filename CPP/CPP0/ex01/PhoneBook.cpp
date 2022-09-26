#include "phonebook.hpp"

phoneBook::phoneBook(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructer" << std::endl;
	std::cout << "this->a1 " << this->a1 << std::endl; 
	this->_private_nb = 0;
	std::cout << "NB = " << this->_private_nb << std::endl;
	return ;
}

phoneBook::~phoneBook(void)
{
	std::cout << "Destructeur" << std::endl;
	return ;
}

