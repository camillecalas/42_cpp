#include "AMateria.hpp"
#include "Ice.hpp"

int main()
{
	// AMateria *c = new Ice;
	std::cout << std::endl;
	Ice *b = new Ice;
	std::cout << std::endl;
	std::cout << b->getType() << std::endl;
	std::cout << std::endl;

	// c->clone();
	b->clone();
	std::cout << std::endl;

	delete b;
	b = 0;
	// delete c;
	// c = 0;
	return (0);
}