#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class Span
{

	public:

		Span();
		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		unsigned int 	getN() const;
		void			addNumber(int);
		void			addRange(std::vector<int>::iterator, std::vector<int>::iterator);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		Span &			operator=( Span const & rhs );

		class TooManyNumber : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class NotEnoughNumbers : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

	private:
		unsigned int				_N;
		std::vector <unsigned int>	_tab;
		unsigned int				_counter;
};


#endif /* ************************************************************ SPAN_H */