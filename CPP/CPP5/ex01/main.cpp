#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	std::cout << std::endl;
	std::cout << "**************************************" << std::endl;
	std::cout << "Create a Bureaucrate with a grade of 0" << std::endl;
	std::cout << "**************************************" << std::endl;
	std::cout << std::endl;

	{
		try
		{
			Bureaucrat A("bob", 0);
		}
		catch (std::exception &e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "****************************************************" << std::endl;
	std::cout << "Create a Bureaucrate with a grade of 23 and decrease" << std::endl;
	std::cout << "****************************************************" << std::endl;
	std::cout << std::endl;

	{
		try
		{
			Bureaucrat A("bob", 23);
			std::cout << A.getName() << " = " << A.getGrade() << std::endl;
			A.DecreaseGrade();
			std::cout << A.getName() << " = " << A.getGrade() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "******************************************************" << std::endl;
	std::cout << "Create a Bureaucrate with a grade of 2 and increase 2x" << std::endl;
	std::cout << "******************************************************" << std::endl;
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
		catch (std::exception &e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "******************************************************" << std::endl;
	std::cout << "Create a Bureaucrate with a grade of 149 and deccrease" << std::endl;
	std::cout << "******************************************************" << std::endl;
	std::cout << std::endl;

	{
		try
		{
			Bureaucrat C("ken", 149);
			C.DecreaseGrade();
			std::cout << C.getName() << " = " << C.getGrade() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "********************************************" << std::endl;
	std::cout << "Create a copy Bureaucrate with a grade of 33" << std::endl;
	std::cout << "********************************************" << std::endl;
	std::cout << std::endl;

	{
		Bureaucrat D("henry", 33);
		Bureaucrat E;
		std::cout << "Before copy :\n";
		std::cout << E.getName() << " = " << E.getGrade() << std::endl;
		E = D;
		std::cout << "After copy :\n";
		try
		{
			D.DecreaseGrade();
			std::cout << E.getName() << " = " << E.getGrade() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "************************************************************" << std::endl;
	std::cout << "Create a Bureaucrate via constructor copy with a grade of 10" << std::endl;
	std::cout << "************************************************************" << std::endl;
	std::cout << std::endl;

	{
		Bureaucrat D("henry", 10);
		Bureaucrat E(D);
		std::cout << E.getName() << " = " << E.getGrade() << std::endl;
		try
		{
			E.DecreaseGrade();
			std::cout << E.getName() << " = " << E.getGrade() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "************************************************************" << std::endl;
	std::cout << "Create a Form" << std::endl;
	std::cout << "************************************************************" << std::endl;
	std::cout << std::endl;

	{
		Bureaucrat A("henry", 5);
		Form D("form", 10, 3);
		std::cout << D.getFormName() << " = " << D.getIsSigned() << std::endl;
		try
		{
			D.beSigned(A);
			std::cout << D.getFormName() << " = " << D.getIsSigned() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}


	return (0);
}