#include "ShrubberyCreationForm.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery_Form", 145, 137), _target("Unkown")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery_Form", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy) : Form(copy)
{
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

/******************* OPERATORS OVERLOAD *******************/
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	return (*this);
}

/************************ METHODES ************************/
std::string	ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & A) const
{
	if (this->getIsSigned() == false)
		throw Form::FormNotSigned();
	if (A.getGrade() > ShrubberyCreationForm::getFormGradeToExecute())
		throw Form::FormGradeTooLow();

	std::ofstream fs;
	fs.open(ShrubberyCreationForm::getTarget().append("_shruberry").c_str());
	if (fs.fail())
	{
		std::cerr << strerror(errno) << std::endl;
		return ;
	}
	fs << "       _-_" << std::endl \
	<< "   /~~    ~~ \\" << std::endl \
	<< " /~~         ~~\\" << std::endl \
	<< "{               }" << std::endl \
	<< " \\  _-     -_  /" << std::endl \
	<< "   ~  \\ //  ~" << std::endl \
	<< "_- -   | | _- _" << std::endl \
	<< "  _ -  | |   -_" << std::endl \
	<< "      // \\\\" << std::endl;
	fs.close();
}