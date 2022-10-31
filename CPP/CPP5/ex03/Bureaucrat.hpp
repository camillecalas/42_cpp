#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

# define LOWEST_GRADE 150
# define HIGHEST_GRADE 1

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string, unsigned int);
		Bureaucrat(Bureaucrat const &);
		~Bureaucrat();

		Bureaucrat & operator=(Bureaucrat const &);


		//Assesseurs :
		std::string		getName() const;
		unsigned int	getGrade() const;

		//Manipulateurs :
		void	IncreaseGrade();
		void	DecreaseGrade();

		void	signForm(Form &);
		void	executeForm(Form const & form);
		
		//! ********************************************************
		class GradeTooHigh : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLow : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		//! ********************************************************

	private:
		const std::string 	_name;
		unsigned int		_grade;
};

std::ostream &operator<<(std::ostream & os, Bureaucrat const & obj);

#endif
