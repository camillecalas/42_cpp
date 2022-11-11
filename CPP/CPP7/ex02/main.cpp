#include "Array.tpp"
#include <iostream>
#include <cstdlib>

#define MAX_VAL 750
int main()
{
	try
	{
		Array<int> a(4);
		Array<int> b;

		std::cout << "Size of A = " << a.size() << std::endl;
		for (int i = 0; i < 4; i++)
		{
			a[i] = 2;
			std::cout << a[i] << std::endl;
		}
		std::cout << "*********\n";
		b = a;

		for (int i = 0; i < 4; i++)
		{
			std::cout << b[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "************************************\n";
	try
	{
		Array<int> a(4);

		std::cout << "Size of A = " << a.size() << std::endl;
		for (int i = 0; i < 4; i++)
		{
			a[i] = 2;
			std::cout << a[i] << std::endl;
		}
		std::cout << "*********\n";
		Array<int> b(a);
		std::cout << "Size of B = " << b.size() << std::endl;
		for (int i = 0; i < 4; i++)
		{
			std::cout << b[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "************************************\n";
	{
		// srand(time(NULL));
		// makes use of the computer's internal clock to control the choice of the seed.  Since time is continually changing, the seed is forever changing.  Remember, if the seed number remains the same, the sequence of numbers will be repeated for each run of the program.
		Array<int> numbers(300);
		int	*mirror = new int[300];
		// to prevent sequence repetition between runs 
		srand(time(NULL));
		for (int i = 0; i < 300; i++)
		{
			int	random = rand();
			numbers[i] = random;
			mirror[i] = random;
		}
		try
		{
			for (int i = 0; i < 3; i++)
			{
				std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
				std::cout << "mirror [" << i << "] = " << numbers[i] << std::endl;
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "*********\n";
		try
		{
			std::cout << "Lire valeur 350 = " << numbers[350];
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		


		delete [] mirror;

	}

	
	return (0);
}
   