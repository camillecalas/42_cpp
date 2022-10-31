#include "RobotomyRequestForm.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy_Form", 72, 45), _target("Unkown")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy_Form", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) : Form(copy)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

/******************* OPERATORS OVERLOAD *******************/
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	return (*this);
}



/************************ METHODES ************************/
std::string	RobotomyRequestForm::getTarget() const
{
	return (_target);
}
void	RobotomyRequestForm::execute(Bureaucrat const & A) const
{
	if (this->getIsSigned() == false)
		throw Form::FormNotSigned();
	if (A.getGrade() > RobotomyRequestForm::getFormGradeToExecute())
		throw Form::FormGradeTooLow();
	if (_i % 2)
		std::cout << getTarget() << " has been robotomied" << std::endl;
	else
		std::cout << "Robotomy has failed" << std::endl;
	_i++;
}