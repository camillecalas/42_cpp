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
	_signed = rhs._signed;
	_target = rhs._target;
	unsigned int *ptr_gradeTosign = (unsigned int *)&this->_gradeToSign;
	*ptr_gradeTosign = rhs._gradeToSign;

	unsigned int *ptr_gradeToExecute = (unsigned int *)&this->_gradeToExecute;
	*ptr_gradeToExecute = rhs._gradeToExecute;

	std::string	*ptr_name = (std::string *)&this->_formName;
	*ptr_name = rhs._formName;

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