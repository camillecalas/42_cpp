#include "Base.hpp"

int main()
{
	Base *a1;

	for (int i = 0; i < 10; i++)
	{
		a1 = generate();
		identify(a1);
		identify(*a1);
		std::cout << "*********\n";
		delete(a1);
		a1 = 0;
	}

	return (0);
}