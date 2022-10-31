#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
		public:
			PresidentialPardonForm();
			PresidentialPardonForm(std::string);
			PresidentialPardonForm(PresidentialPardonForm const &);
			virtual ~PresidentialPardonForm();

			PresidentialPardonForm & operator=(PresidentialPardonForm const &rhs);
			void	execute(Bureaucrat const &) const;

			//Assesseurs :
			std::string	getTarget() const;
		
		private:
			std::string		_target;
};

#endif