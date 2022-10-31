#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
	public:
		Intern();
		Intern(Intern const &);
		~Intern();

		Intern & operator=(Intern const &);

		Form *	makeForm(std::string formName, std::string target);
		Form *	makeShrubbery(std::string target);
		Form *	makeRobotomy(std::string target);
		Form *	makePresidential(std::string target);

		//! ********************************************************
		class FormNotFound : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		//! ********************************************************
};

#endif