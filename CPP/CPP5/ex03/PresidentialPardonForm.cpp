#include "PresidentialPardonForm.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential_Form", 72, 45), _target("Unkown")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential_Form", 72, 45), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) : Form(copy)
{
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

/******************* OPERATORS OVERLOAD *******************/
PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	return (*this);
}

/************************ METHODES ************************/
std::string	PresidentialPardonForm::getTarget() const
{
	return (_target);
}
void	PresidentialPardonForm::execute(Bureaucrat const & A) const
{
	if (this->getIsSigned() == false)
		throw Form::FormNotSigned();
	if (A.getGrade() > PresidentialPardonForm::getFormGradeToExecute())
		throw Form::FormGradeTooLow();
	std::cout << getTarget() << " has been forgiven by Zaphod Beeblebrox\n";
}