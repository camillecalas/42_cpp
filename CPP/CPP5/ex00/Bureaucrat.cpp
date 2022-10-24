#include "Bureaucrat.hpp"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	if (grade < HIGHEST_GRADE)
		throw "Bureaucrat::GradeTooHighException\n";
	else if (grade > LOWEST_GRADE)
		throw "Bureaucrat::GradeTooLowException\n";
	else
		_grade = grade;
}

Bureaucrat::~Bureaucrat()
{}

/******************* OPERATORS OVERLOAD *******************/
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
std::string		Bureaucrat::getName()
{
	return (_name);
}

unsigned int	Bureaucrat::getGrade()
{
	return (_grade);
}


// Degremente car 1 est l'echelon le plus haut
void	Bureaucrat::IncreaseGrade()
{
	if (_grade > HIGHEST_GRADE)
		_grade--;
	else
		throw "Bureaucrat::GradeTooHighException\n";
}
// Increment car 150 est l'echelon le plus bas
void	Bureaucrat::DecreaseGrade()
{
	if (_grade < LOWEST_GRADE)
		_grade++;
	else
		throw "Bureaucrat::GradeTooLowException\n";
}