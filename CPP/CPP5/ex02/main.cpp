#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{

	

	{
		std::cout << std::endl;
		std::cout << "************************" << std::endl;
		std::cout << "Create a Shruberry Forms" << std::endl;
		std::cout << "************************" << std::endl;
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
	{
		std::cout << std::endl;
		std::cout << "***********************" << std::endl;
		std::cout << "Create a Robotomy Forms" << std::endl;
		std::cout << "***********************" << std::endl;
		std::cout << std::endl;

		{
			try
			{
				Bureaucrat A("Henry", 73);
				RobotomyRequestForm D;
				std::cout << A.getName() << " = " << A.getGrade() << std::endl;
				std::cout << D.getFormName() << " = " << D.getIsSigned() << std::endl;
				D.beSigned(A);
				std::cout << D.getFormName() << " = " << D.getIsSigned() << std::endl;
				D.execute(A);
				D.execute(A);
				D.execute(A);
			}
			catch (std::exception &e)
			{
				std::cout << "Exception: " << e.what() << std::endl;
			}
		}
	}
	{
		std::cout << std::endl;
		std::cout << "***************************" << std::endl;
		std::cout << "Create a Presidential Forms" << std::endl;
		std::cout << "***************************" << std::endl;
		std::cout << std::endl;

		{
			try
			{
				Bureaucrat A("Henry", 5);
				PresidentialPardonForm D;
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
	{
		std::cout << std::endl;
		std::cout << "***************************" << std::endl;
		std::cout << "Execute form from Bureaucrat" << std::endl;
		std::cout << "***************************" << std::endl;
		std::cout << std::endl;

		{
			try
			{
				Bureaucrat A("Henry", 5);
				PresidentialPardonForm D;
				std::cout << A.getName() << " = " << A.getGrade() << std::endl;
				std::cout << D.getFormName() << " = " << D.getIsSigned() << std::endl;
				D.beSigned(A);
				std::cout << D.getFormName() << " = " << D.getIsSigned() << std::endl;
				A.executeForm(D);
			}
			catch (std::exception &e)
			{
				std::cout << "Exception: " << e.what() << std::endl;
			}
		}
	}




{

	std::cout << std::endl;
	std::cout << "**********" << std::endl;
	std::cout << "More tests" << std::endl;
	std::cout << "**********" << std::endl;
	std::cout << std::endl;


	Form			*form = NULL;
	Bureaucrat		bob("bob", 1);
	Bureaucrat		phil("phil", 40);
	Bureaucrat		luc("luc", 150);

	try
	{
		form = new PresidentialPardonForm("28A");
		form->beSigned(bob);
		form->execute(bob);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "********************************************" << std::endl;
	try
	{
		form = new RobotomyRequestForm("28B");
		form->beSigned(phil);
		form->execute(phil);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "********************************************" << std::endl;
	try
	{
		form = new ShrubberyCreationForm("28C");
		form->beSigned(luc);
		form->execute(luc);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "********************************************" << std::endl;
	Form *formP = new PresidentialPardonForm("45GCD");
	Form *formR = new RobotomyRequestForm("45RQF");
	Form *formS = new ShrubberyCreationForm("45SBR");
	formP->beSigned(bob);
	bob.executeForm(*formP);
	phil.executeForm(*formP);
	std::cout << "********************************************" << std::endl;
	formR->beSigned(phil);
	bob.executeForm(*formR);
	phil.executeForm(*formR);
	std::cout << "********************************************" << std::endl;
	formS->beSigned(phil);
	phil.executeForm(*formS);

	delete (formP);
	formP = NULL;
	delete(formR);
	formR = NULL;
	delete(formS);
	formS = NULL;

	delete form;

}












	
	return (0);
}




// {
	// 	Form			*form = NULL;
	// 	Bureaucrat		bob("bob", 1);
	// 	Bureaucrat		phil("phil", 40);
	// 	Bureaucrat		luc("luc", 18);

	// try
	// {
	// 	form = new PresidentialPardonForm("28A");
	// 	std::cout << "Form = " << form->getIsSigned() << std::endl;
	// 	form->beSigned(bob);
	// 	// bob.signForm(*form);
	// 	std::cout << "Form = " << form->getIsSigned() << std::endl;
	// 	form->execute(bob);
	// 	std::cout << "Form = " << form->getIsSigned() << std::endl;
	// 	bob.executeForm(PresidentialPardonForm("45GCD"));
	// 	delete form;
	// 	form = NULL;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << std::endl;
	// std::cout << "****\n";
	// std::cout << std::endl;
	// }
	// try
	// {
		
	// 	form = new RobotomyRequestForm("28B");
	// 	form->beSigned(phil);
		
	// 	form->execute(phil);
	// 	delete form;
	// 	form = NULL;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	form = new ShrubberyCreationForm("28C");
	// 	form->beSigned(luc);
	// 	form->execute(luc);
	// 	delete form;
	// 	form = NULL;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }



	
	// phil.executeForm(PresidentialPardonForm("45GCD"));

	// bob.executeForm(RobotomyRequestForm("74A"));
	// phil.executeForm(RobotomyRequestForm("74A"));
	
	// phil.executeForm(ShrubberyCreationForm("T408"));

	// delete form;
	// }
