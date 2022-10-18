#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{

	// {
	// 	std::cout << std::endl;
	// 	std::cout << " *** Simple attacks *** " << \
	// 	std::endl;
	// 	FragTrap	hulk("Hulk");
	// 	hulk.attack("John");
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << " *** Simple attacks : Target unkown *** " << \
	// 	std::endl;
	// 	FragTrap	hulk("Hulk");
	// 	hulk.attack("");
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << " *** Multiply attacks till no points left *** " << \
	// 	std::endl;
	// 	FragTrap	hulk("Hulk");
	// 	int N(101);
	// 	while (N--)
	// 		hulk.attack("John");
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << " *** Take dammages *** " << \
	// 	std::endl;
	// 	FragTrap	hulk("Hulk");
	// 	hulk.takeDamage(60);
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << " *** Take dammages till death *** " << \
	// 	std::endl;
	// 	FragTrap	hulk("Hulk");
	// 	for (int i = 0; i < 3; i++)
	// 	{
	// 		hulk.takeDamage(40);
	// 		if (hulk.getHit() <= 0)
	// 			break ;
	// 	}
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << " *** Take dammages + Try to repair while being dead *** " << \
	// 	std::endl;
	// 	FragTrap	hulk("Hulk");
	// 	hulk.takeDamage(100);
	// 	hulk.beRepaired(5);
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << " *** Take dammages + Try to attack while being dead *** " << \
	// 	std::endl;
	// 	FragTrap	hulk("Hulk");
	// 	hulk.takeDamage(120);
	// 	hulk.attack("John");
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << " *** Repair when already has full points *** " << \
	// 	std::endl;
	// 	FragTrap	hulk("Hulk");
	// 	hulk.beRepaired(10);
	// }
	// 	{
	// 	std::cout << std::endl;
	// 	std::cout << " *** Repair when no energy points left *** " << \
	// 	std::endl;
	// 	FragTrap	hulk("Hulk");
	// 	hulk.takeDamage(120);
	// 	hulk.beRepaired(1);
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << " *** Attack with a FragTrap copy *** " << \
	// 	std::endl;
	// 	FragTrap	hulk("Hulk");
	// 	FragTrap	henry(hulk);
	// 	henry.takeDamage(10);
	// 	henry.attack("John");
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << " *** High Fives *** " << \
	// 	std::endl;
	// 	FragTrap	hulk("Hulk");
	// 	FragTrap	henry(hulk);
	// 	hulk.highFivesGuys();
	// 	henry.highFivesGuys();
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << " *** Taking damage then repairing fully *** " << std::endl;
	// 	FragTrap	hulk("Hulk");
	// 	std::cout << "Current hit points: " << hulk.getHit() << std::endl;
	// 	hulk.takeDamage(5);
	// 	std::cout << "Current hit points: " << hulk.getHit() << std::endl;
	// 	hulk.beRepaired(5);
	// 	std::cout << "Current hit points: " << hulk.getHit() << std::endl;
	// }
	// return (0);	





	{
		std::cout << "\tClapTrap Tests" << std::endl << std::endl ;
		ClapTrap	clap("John");

		std::cout << std::endl;

		clap.attack("Hulk");
		clap.beRepaired(10);
		clap.takeDamage(100);
		clap.beRepaired(1000);

		std::cout << std::endl;
	}
	{
		std::cout << std::endl << "\tScavTrap Tests" << std::endl << std::endl ;
		ScavTrap	scav("Leo");

		std::cout << std::endl;

		scav.attack("John");
		scav.takeDamage(10);
		scav.takeDamage(50);
		scav.beRepaired(5);
		scav.guardGate();

		std::cout << std::endl;

	}
	{
		std::cout << std::endl << "\tFragTrap Tests" << std::endl << std::endl ;
		FragTrap		frag("Ken");

		std::cout << std::endl;

		frag.attack("Leo");
		frag.takeDamage(10);
		frag.highFivesGuys();
		frag.takeDamage(100);

		std::cout << std::endl;

	}
	{
		std::cout << std::endl << "\tDiamondTrap Tests" << std::endl << std::endl ;
		DiamondTrap		diamond("Diam's");

		std::cout << std::endl;

		diamond.attack("Ken");
		diamond.takeDamage(30);
		diamond.takeDamage(30);
		diamond.takeDamage(30);
		diamond.whoAmI();

		std::cout << std::endl;
	}

	return (0);


}