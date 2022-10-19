#include "AMateria.hpp"
#include "Ice.hpp"

int main()
{

	Ice *b = new Ice;
	std::cout << std::endl;
	std::cout << b->getType() << std::endl;
	Ice *c = NULL;
	c->clone();

	delete b;
	b = 0;

	return (0);
}