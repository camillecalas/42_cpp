#include "Base.hpp"

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Base::~Base()
{
}


/*
** --------------------------------- FONCTIONS ----------------------------------
*/

// int random = offset + (rand() % range);
// In the above equation:
// offset - The starting point for the range of random numbers
// range - The number of values between first and the last possible random number including the limits.

Base * generate(void)
{
	int random = 0 + (rand() % 3);

	if (random == 0)
		return (new A);
	else if (random == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Type = A\n";
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Type = B\n";
	if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Type = C\n";
}

void identify(Base& p)
{
	try
	{
		Base a = dynamic_cast<A&>(p);
		std::cout << "Type = a\n";
	}
	catch(const std::exception& e)
	{}

	try
	{
		Base b = dynamic_cast<B&>(p);
		std::cout << "Type = b\n";
	}
	catch(const std::exception& e)
	{}

	try
	{
		Base b = dynamic_cast<C&>(p);
		std::cout << "Type = c\n";
	}
	catch(const std::exception& e)
	{}
}


/* ************************************************************************** */