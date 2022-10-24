#include "Bureaucrat.hpp"

std::ostream & operator<<(std::ostream & os, Bureaucrat & obj)
{
	os << obj.getName();
	std::cout << ", bureaucrat grade ";
	os << obj.getGrade();
	std::cout << "." << std::endl;
	return (os);
}

int	main()
{
	std::cout << std::endl;
	std::cout << "********************" << std::endl;
	std::cout << std::endl;

	{
		try
		{
			Bureaucrat A("bob", 23);
			std::cout << A.getName() << " = " << A.getGrade() << std::endl;
			A.DecreaseGrade();
			std::cout << A.getName() << " = " << A.getGrade() << std::endl;
		}
		catch (const char *Exception)
		{
			std::cout << "Exception: " << Exception << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "********************" << std::endl;
	std::cout << std::endl;

	{
		try
		{
			Bureaucrat B("leo", 2);
			B.IncreaseGrade();
			std::cout << B.getName() << " = " << B.getGrade() << std::endl;
			B.IncreaseGrade();
			std::cout << B.getName() << " = " << B.getGrade() << std::endl;
		}
		catch (const char *Exception)
		{
			std::cout << "Exception: " << Exception << std::endl;
		}	
	}

	std::cout << std::endl;
	std::cout << "********************" << std::endl;
	std::cout << std::endl;

	{
		try
		{
			Bureaucrat C("ken", 149);
			C.DecreaseGrade();
			std::cout << C.getName() << " = " << C.getGrade() << std::endl;
		}
		catch (const char *Exception)
		{
			std::cout << "Exception: " << Exception << std::endl;
		}
	}
	return (0);
}