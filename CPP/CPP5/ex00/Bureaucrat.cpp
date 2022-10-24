#include "Bureaucrat.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Bureaucrat::Bureaucrat() : _name("Unkown"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	if (grade < HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHigh();
	else if (grade > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLow();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) : _name(copy._name)
{
	_grade = copy._grade;
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{}

/******************* OPERATORS OVERLOAD *******************/
Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_grade = rhs.getGrade();
	// std::string *s = (std::string)&this->_name;
	// *s = copy.getName();
	// 	// 	std::string* string_ptr = const_cast<std::string*>(&this->_name);
	// 	// *string_ptr = rhs._name;
	// 	// this->_grade = rhs._grade;
	return (*this);
	
}


// std::ostream & operator<<(std::ostream & os, Bureaucrat & obj)
// {
// 	os << obj.getName();
// 	std::cout << ", bureaucrat grade ";
// 	os << obj.getGrade();
// 	std::cout << "." << std::endl;
// 	return (os);
// }


/************************ METHODES ************************/
//Assesseurs :
std::string		Bureaucrat::getName() const
{
	return (_name);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (_grade);
}


// Degremente car 1 est l'echelon le plus haut
void	Bureaucrat::IncreaseGrade()
{
	if (_grade > HIGHEST_GRADE)
		_grade--;
	else
		throw Bureaucrat::GradeTooHigh();
}
// Increment car 150 est l'echelon le plus bas
void	Bureaucrat::DecreaseGrade()
{
	if (_grade < LOWEST_GRADE)
		_grade++;
	else
		throw Bureaucrat::GradeTooLow();
}



/************************ GRADES ************************/
const char *Bureaucrat::GradeTooLow::what() const throw()
{
	return ("Bureaucrat::GradeTooLowException\n");
}

const char *Bureaucrat::GradeTooHigh::what() const throw()
{
	return ("Bureaucrat::GradeTooHighException\n");
}