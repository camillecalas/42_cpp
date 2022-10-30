#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	{
		std::cout << std::endl;
		std::cout << "****************************************" << std::endl;
		std::cout << "Create a Shruberry Forms" << std::endl;
		std::cout << "****************************************" << std::endl;
		std::cout << std::endl;

		{
			try
			{
				Bureaucrat A("Henry", 5);
				ShrubberyCreationForm D;
				std::cout << A.getName() << " = " << A.getGrade() << std::endl;
				std::cout << D.getFormName() << " = " << D.getIsSigned() << std::endl;
				D.beSigned(A);
				std::cout << D.getFormName() << " = " << D.getIsSigned() << std::endl;
				D.execute(A);
			}
			catch (std::exception &e)
			{
				std::cout << "Exception: " << e.what() << std::endl;
			}
		}
	}

	// {
	// 	std::cout << std::endl;
	// 	std::cout << "****************************************" << std::endl;
	// 	std::cout << "Create a Bureaucrat and some WRONG Forms" << std::endl;
	// 	std::cout << "****************************************" << std::endl;
	// 	std::cout << std::endl;

	// 	{
	// 		try
	// 		{
	// 			Bureaucrat A("Henry", 5);
	// 			Form D("Form D", -1, 3);
	// 			std::cout << A.getName() << " = " << A.getGrade() << std::endl;
	// 			std::cout << D.getFormName() << " = " << D.getIsSigned() << std::endl;
	// 		}
	// 		catch (std::exception &e)
	// 		{
	// 			std::cout << "Exception: " << e.what() << std::endl;
	// 		}
	// 	}
	// }

	// {
	// 	std::cout << std::endl;
	// 	std::cout << "****************************************************" << std::endl;
	// 	std::cout << "Create a Bureaucrat and a Form | Henry sign the form" << std::endl;
	// 	std::cout << "****************************************************" << std::endl;
	// 	std::cout << std::endl;

	// 	{
	// 		try
	// 		{
	// 			Bureaucrat A("Henry", 5);
	// 			Form D("Form D", 10, 3);
	// 			std::cout << A.getName() << " = " << A.getGrade() << std::endl;
	// 			std::cout << D.getFormName() << " = " << D.getIsSigned() << std::endl;
	// 			A.signForm(D);
	// 			std::cout << "\n *** \n" << std::endl;

	// 			D.beSigned(A);
	// 			std::cout << D.getFormName() << " = " << D.getIsSigned() << std::endl;
	// 			D.beSigned(A);
	// 			std::cout << D.getFormName() << " = " << D.getIsSigned() << std::endl;
	// 			A.signForm(D);
	// 		}
	// 		catch (std::exception &e)
	// 		{
	// 			std::cout << "Exception: " << e.what() << std::endl;
	// 		}
	// 	}
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << "**********************************************************" << std::endl;
	// 	std::cout << "Create a Bureaucrat and a Form | John cannot sign the form" << std::endl;
	// 	std::cout << "**********************************************************" << std::endl;
	// 	std::cout << std::endl;

	// 	{
	// 		try
	// 		{
	// 			Bureaucrat B("John", 50);
	// 			Form E("Form E", 5, 3);
	// 			std::cout << B.getName() << " = " << B.getGrade() << std::endl;
	// 			std::cout << E.getFormName() << " = " << E.getIsSigned() << std::endl;
	// 			B.signForm(E);
	// 			std::cout << "\n *** \n" << std::endl;

	// 			E.beSigned(B);
	// 			std::cout << E.getFormName() << " = " << E.getIsSigned() << std::endl;
	// 			E.beSigned(B);
	// 			std::cout << E.getFormName() << " = " << E.getIsSigned() << std::endl;
	// 			B.signForm(E);
	// 		}
	// 		catch (std::exception &e)
	// 		{
	// 			std::cout << "Exception: " << e.what() << std::endl;
	// 		}
	// 	}
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << "******************************************************" << std::endl;
	// 	std::cout << "Create a Bureaucrat and a Form | Leo and Hugh can sign" << std::endl;
	// 	std::cout << "******************************************************" << std::endl;
	// 	std::cout << std::endl;

	// 	{
	// 		try
	// 		{
	// 			Bureaucrat B("Leo", 10);
	// 			Bureaucrat C("Hugh", 10);
	// 			Form E("Form E", 11, 3);
	// 			std::cout << B.getName() << " = " << B.getGrade() << std::endl;
	// 			std::cout << C.getName() << " = " << B.getGrade() << std::endl;
	// 			std::cout << E.getFormName() << " = " << E.getIsSigned() << std::endl;
	// 			std::cout << "\n *** \n" << std::endl;

	// 			E.beSigned(B);
	// 			B.signForm(E);
	// 			E.beSigned(C);
	// 			C.signForm(E);

	// 			std::cout << E.getFormName() << " = " << E.getIsSigned() << std::endl;
	// 			B.DecreaseGrade();
	// 			E.beSigned(B);

	// 			std::cout << E.getFormName() << " = " << E.getIsSigned() << std::endl;
	// 			B.signForm(E);
	// 		}
	// 		catch (std::exception &e)
	// 		{
	// 			std::cout << "Exception: " << e.what() << std::endl;
	// 		}
	// 	}

	// }

	return (0);
}