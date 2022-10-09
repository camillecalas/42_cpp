#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
class Harl
{
	public:
		Harl(void);
		~Harl();
		void	complain(std::string);

	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
};

//pointeurs sur fonctions membres
typedef	void (Harl::*pfn_complain)(void);

#endif