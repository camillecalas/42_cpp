#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

# define MAX_IDEAS 100

class Brain
{
	public:
		Brain();
		Brain(Brain const &copy);
		virtual ~Brain();

		Brain	&	operator=(Brain const &);
		void		setIdea(int, std::string);
		std::string	getIdea(int);

	private:
		std::string	_ideas[MAX_IDEAS];

};

#endif