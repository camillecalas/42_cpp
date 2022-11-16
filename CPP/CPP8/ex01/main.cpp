#include "Span.hpp"

int main()
{
	{
		try
		{
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "***************************\n";
	{
		try
		{
			std::cout << "********** COPY ***********\n";
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			Span sp2(sp);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			std::cout << "*********\n";
			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
		std::cout << "***************************\n";
	{
		try
		{
			std::cout << "********** COPY = ***********\n";
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			Span sp2;
			sp2 = sp;
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			std::cout << "*********\n";
			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "***************************\n";
	{
		try
		{
			Span A(4);
			A.addNumber(1);
			A.addNumber(2);
			A.addNumber(3);
			A.addNumber(10);
			std::cout << A.shortestSpan() << std::endl;
			std::cout << A.longestSpan() << std::endl;
			// A.addNumber(5);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "***************************\n";
	{
		try
		{
			Span A(10000);
			for (int i = 0; i < 10000; i++)
			{
				A.addNumber(i);
			}
			std::cout << A.shortestSpan() << std::endl;
			std::cout << A.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "***************************\n";
	{
		try
		{
			Span A(10000);
			for (int i = 0; i < 10000; i++)
			{
				A.addNumber(i);
			}
			std::cout << A.shortestSpan() << std::endl;
			std::cout << A.longestSpan() << std::endl;
			A.addNumber(5);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "***************************\n";
	{
		try
		{
			Span A(10000);
			std::cout << A.shortestSpan() << std::endl;
			std::cout << A.longestSpan() << std::endl;
			A.addNumber(5);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "***************************\n";
	{
		try
		{ 	
			Span sp = Span(3);
			std::vector <int> vect;
			vect.push_back(1);
			vect.push_back(2);
			vect.push_back(3);
			sp.addRange(vect.begin(), vect.end());
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	
	return (0);
}