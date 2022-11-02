#ifndef ROBOTOMYCREATIONFORM_HPP
# define ROBOTOMYCREATIONFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
		public:
			RobotomyRequestForm();
			RobotomyRequestForm(std::string);
			RobotomyRequestForm(RobotomyRequestForm const &);
			virtual ~RobotomyRequestForm();

			RobotomyRequestForm & operator=(RobotomyRequestForm const &rhs);
			void	execute(Bureaucrat const &) const;

			//Assesseurs :
			std::string	getTarget() const;
		
		private:
			std::string		_target;
			static int		_i;
};

#endif