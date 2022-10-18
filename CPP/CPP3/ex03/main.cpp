// #include "ClapTrap.hpp"
// #include "FragTrap.hpp"
// #include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{


std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		ClapTrap a;
		ClapTrap b("Cody");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	std::cout << "\n\n### TESTING SCAVTRAP ###\n" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		ScavTrap a;
		ScavTrap b("Savage");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		a.attack("CloneTrap");
		// for (int i = 0; i < 50; i++)
		// 	a.attack("CloneTrap");
		a.beRepaired(22);
		a.takeDamage(21);
		a.beRepaired(22);
		a.guardGate();
		a.guardGate();
		b.attack("Savage-clone");
		b.takeDamage(101);
		b.takeDamage(15);
		b.attack("ScavTrap-clone");
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	std::cout << "\n\n### TESTING FRAGTRAP ###\n" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		FragTrap a;
		FragTrap b("Chadd");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		a.highFivesGuys();
		a.attack("some random dude");
		a.takeDamage(101);
		a.takeDamage(1);
		a.attack("some random dude");
		b.highFivesGuys();
		// for(int i = 0; i < 101; i++)
		// 	b.attack("FragTrap-clone");
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	std::cout << "\n\n### TESTING DIAMONDTRAP ###\n" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		DiamondTrap a;
		DiamondTrap b("Giga Chadd");
		DiamondTrap c(a);

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		a.whoAmI();
		a.attack("some super random dude");
		b.whoAmI();
		b.attack("Chadd-clone");
		c.whoAmI();
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	return (0);
	
// //ATTENTION DIAMOND_TRAP DOIT AVOIR LE MM NAME QUE LES AUTRES CLASS ??
// 	std::cout << "\n----------------NOTHING----------------------" << std::endl;
// 	DiamondTrap	diamondtrap;
// 	diamondtrap.whoAmI();
// 	diamondtrap.attack("Omar");
// 	std::cout << "\n----------------STR INPUT----------------------" << std::endl;
// 	DiamondTrap	diamondtrap2("Gustave");
// 	diamondtrap2.whoAmI();
// 	std::cout << "\n---------------COPY-----------------------" << std::endl;
// 	DiamondTrap	diamondtrap3(diamondtrap2);
// 	diamondtrap3.whoAmI();
// 	std::cout << "\n---------------EQUAL-----------------------" << std::endl;
// 	DiamondTrap	diamondtrap4;
// 	diamondtrap4 = diamondtrap2;
// 	diamondtrap4.whoAmI();
// 	std::cout << "\n--------------------------------------" << std::endl;
// 	return (0);
}