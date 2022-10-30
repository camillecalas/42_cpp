#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <fstream>
#include <cerrno>
#include <iosfwd>
#include <cstring>
#include "Bureaucrat.hpp"

# define LOWEST_GRADE 150
# define HIGHEST_GRADE 1

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExecute);
		Form(Form const &);
		virtual ~Form();

		Form & 			operator=(Form const &);

		//Assesseurs :
		unsigned int	getFormGradeToSign() const;
		unsigned int	getFormGradeToExecute() const;
		bool			getIsSigned() const;
		std::string		getFormName() const;

		void			beSigned(Bureaucrat &);
		virtual void	execute(Bureaucrat const &) const = 0;

		//! ********************************************************
		class FormGradeTooHigh : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class FormGradeTooLow : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class FormNotSigned : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		//! ********************************************************

	protected:
		std::string const	_formName;
		unsigned int const	_gradeToSign;
		unsigned int const	_gradeToExecute;
		bool				_signed;

};

std::ostream &operator<<(std::ostream & os, Form const & obj);

#endif