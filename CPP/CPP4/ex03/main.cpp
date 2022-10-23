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
		ICharacter* me = new Character("me");
		AMateria* tmp;
		ICharacter* bob = new Character("bob");

		std::cout << "* Equip too much *" << std::endl;
		std::cout << std::endl;
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);
		me->use(4, *bob);

		std::cout << std::endl;
		std::cout << "* Unequip *" << std::endl;
		std::cout << std::endl;
		me->unequip(0);
		me->use(0, *bob);
		
		delete bob;
		delete me;
		delete src;
	}

	


	return (0);
}


// IMateriaSource* src = new MateriaSource();

// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	ICharacter* me = new Character("me");
// 	ICharacter* ennemi = new Character("ennemi");
	
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	me->use(0, *ennemi);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	me->use(1, *ennemi);
// 	tmp = src->createMateria("unknown materia");
// 	me->equip(tmp);
// 	me->use(2, *ennemi);
	
// 	me->unequip(1);
// 	me->use(1, *ennemi);
	
// 	IMateriaSource* src2 = new MateriaSource();

// 	src2->learnMateria(new Cure());
// 	src2->learnMateria(new Ice());

// 	me->equip(src2->createMateria("cure"));
// 	me->equip(src2->createMateria("ice"));

// 	std::cout << std::endl;

// 	for (int i = 0; i < 4; i++)
// 		me->use(i, *ennemi);
	
// 	delete src2;
// 	delete me;
// 	delete src;
// 	delete ennemi;
