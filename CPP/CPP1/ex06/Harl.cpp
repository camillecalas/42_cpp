#include "Harl.hpp"
#include "iostream"

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Harl::Harl(void)
{
	return ;
}

Harl::~Harl()
{
	return ;
}

/**************************** METHODES ****************************/
void	Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl << std::endl;
}
void	Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger ! If you did, I wouldnt be asking for more !" << std::endl << std::endl;
}
void	Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl << std::endl;
}
void	Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::complain(std::string input)
{
	void	(Harl::*fptr[4])(void)  =  {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string complain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;

	i = 0;

	while (i < 4)
	{
		if (input.compare(complain[i]) == 0)
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
			(this->*fptr[0])();
		case 1:
			(this->*fptr[1])();
		case 2:
			(this->*fptr[2])();
		case 3:
			(this->*fptr[3])();
		// default:
		// 	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
		// 	break ;
	}
	return ;
}