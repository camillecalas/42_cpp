#include "Intern.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Intern::Intern()
{}

Intern::Intern(Intern const & copy)
{
	*this = copy;
}

Intern::~Intern()
{}

/******************* OPERATORS OVERLOAD *******************/
Intern & Intern::operator=(Intern const & rhs)
{
	(void) rhs;
	return (*this);
}

/************************ METHODES ************************/
Form	*Intern::makeShrubbery(std::string target)
{
	Form *	form = new ShrubberyCreationForm(target);
	return (form);
}

Form	*Intern::makeRobotomy(std::string target)
{
	Form *	form = new RobotomyRequestForm(target);
	return (form);
}

Form	*Intern::makePresidential(std::string target)
{
	Form *	form = new PresidentialPardonForm(target);
	return (form);
}


Form	*Intern::makeForm(std::string formName, std::string target)
{
	Form * form;
	Form * (Intern::*ptr_form[3])(std::string) = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};
	std::string	names[3] = {"Shruberry", "Robotomy", "Presidential"};

	for (int i = 0; i < 1; i++)
	{
		if (formName.compare(names[i]) == 0)
		{
			std::cout << "Intern creates " << formName << std::endl;
			form = (this->*ptr_form[i])(target);
			return (form);
		}
	}

	throw Intern::FormNotFound();
	return (form);
}


const char *Intern::FormNotFound::what() const throw()
{
	return ("Intern::FormDoNotHaveAName\n");
}