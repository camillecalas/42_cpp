#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

# define HIGHEST_GRADE_TO_SIGN 145
# define HIGHEST_GRADE_TO_EXECUTE 137

class ShrubberyCreationForm : public Form
{
		public:
			ShrubberyCreationForm();
			ShrubberyCreationForm(std::string);
			ShrubberyCreationForm(ShrubberyCreationForm const &);
			virtual ~ShrubberyCreationForm();

			ShrubberyCreationForm & operator=(ShrubberyCreationForm const &rhs);
			void	execute(Bureaucrat const &) const;

			//Assesseurs :
			std::string	getTarget() const;
		
		private:
		std::string	_target;
};

#endif