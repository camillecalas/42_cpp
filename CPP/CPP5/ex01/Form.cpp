#include "Form.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Form::Form() : _formName("Unkown"), _gradeToSign(150), _gradeToExecute(150), _signed(false)
{
}

Form::Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExecute) : _formName(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	// if (_gradeToSign < HIGHEST_GRADE || _gradeToExecute < HIGHEST_GRADE)
	// 	throw Form::FormGradeTooHigh();
	// else if (_gradeToSign > LOWEST_GRADE || _gradeToExecute > HIGHEST_GRADE)
	// 	throw Form::FormGradeTooLow();
}

Form::Form(Form const & copy) : _formName(copy._formName), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute), _signed(copy._signed)
{
	*this = copy;
}

Form::~Form()
{}

/******************* OPERATORS OVERLOAD *******************/
Form & Form::operator=(Form const &rhs)
{
	if (this == &rhs)
		return (*this);
	_signed = rhs._signed;

	unsigned int *ptr_gradeTosign = (unsigned int *)&this->_gradeToSign;
	*ptr_gradeTosign = rhs._gradeToSign;

	unsigned int *ptr_gradeToExecute = (unsigned int *)&this->_gradeToExecute;
	*ptr_gradeToExecute = rhs._gradeToExecute;

	std::string	*ptr_name = (std::string *)&this->_formName;
	*ptr_name = rhs._formName;

	return (*this);
}

std::ostream &operator<<(std::ostream & os, Form const & obj)
{
	os << obj.getFormName();
	std::cout << ", Form grade to sign ";
	os << obj.getFormGradeToSign();
	std::cout << ", Form grade to execute ";
	os << obj.getFormGradeToExecute();
	std::cout << ", is signed : ";
	os << obj.getIsSigned();
	std::cout << "." << std::endl;
	return (os);
}

/************************ METHODES ************************/
//Assesseurs :
std::string		Form::getFormName() const
{
	return (_formName);
}

unsigned int	Form::getFormGradeToSign() const
{
	return (_gradeToSign);
}

unsigned int	Form::getFormGradeToExecute() const
{
	return (_gradeToExecute);
}

bool			Form::getIsSigned() const
{
	return (_signed);
}

void	Form::beSigned(Bureaucrat A)
{	
	if (A.getGrade() < _gradeToSign)
		_signed = true;
	else
		throw Form::FormGradeTooLow();
}

/************************ GRADES ************************/
const char *Form::FormGradeTooLow::what() const throw()
{
	return ("Form::GradeTooLowException\n");
}

const char *Form::FormGradeTooHigh::what() const throw()
{
	return ("Form::GradeTooHighException\n");
}
