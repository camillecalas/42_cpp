#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

# define LOWEST_GRADE 150
# define HIGHEST_GRADE 1

class Bureaucrat
{
	public:
		Bureaucrat(std::string, unsigned int);
		~Bureaucrat();


		//Assesseurs :
		std::string		getName();
		unsigned int	getGrade();

		//Manipulateurs :
		void	IncreaseGrade();
		void	DecreaseGrade();

	private:
		std::string const	_name;
		unsigned int		_grade;
};

std::ostream &operator<<(std::ostream & os, Bureaucrat const & obj);

#endif
