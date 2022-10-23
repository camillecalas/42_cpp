#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"



int main()
{
	{
		std::cout << "*** Test given ***" << std::endl << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "*** More Tests ***" << std::endl << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* john = new Character("John");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		john->equip(tmp);
		tmp = src->createMateria("ice");
		john->equip(tmp);

		ICharacter* bob = new Character("bob");
		bob->equip(src->createMateria("cure"));

		john->unequip(1);
		delete (tmp);

		john->use(0, *bob);
		bob->use(0, *john);

		delete bob;
		delete john;
		delete src;
	}
	return (0);
}