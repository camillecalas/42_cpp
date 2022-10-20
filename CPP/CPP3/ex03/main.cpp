#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	{
		std::cout << "*** ClapTrap Tests ***" << std::endl << std::endl ;
		ClapTrap	clap("Hulk");

		std::cout << std::endl;

		clap.attack("Hulk");
		clap.beRepaired(10);
		clap.takeDamage(100);
		clap.beRepaired(1000);

		std::cout << std::endl;
	}
	{
		std::cout << std::endl << "*** ScavTrap Tests ***" << std::endl << std::endl ;
		ScavTrap	scav("Aladin");

		std::cout << std::endl;

		scav.attack("John");
		scav.takeDamage(10);
		scav.takeDamage(50);
		scav.beRepaired(5);
		scav.guardGate();

		std::cout << std::endl;

	}
	{
		std::cout << std::endl << "*** FragTrap Tests ***" << std::endl << std::endl ;
		FragTrap	frag("John");

		std::cout << std::endl;

		frag.attack("Leo");
		frag.takeDamage(10);
		frag.highFivesGuys();
		frag.takeDamage(100);

		std::cout << std::endl;

	}
	{
		std::cout << std::endl << "*** DiamondTrap Tests ***" << std::endl << std::endl ;
		DiamondTrap		diamond("Diam's");

		std::cout << std::endl;

		diamond.attack("Ken");
		diamond.takeDamage(30);
		diamond.takeDamage(30);
		diamond.takeDamage(30);
		diamond.highFivesGuys();
		diamond.guardGate();
		diamond.whoAmI();

		std::cout << std::endl;
	}

	return (0);


}