#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"





int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	// tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	return (0);
}



// int main()
// {
// 	// AMateria *c = new Ice;
// 	std::cout << std::endl;
// 	Ice *b = new Ice;
// 	std::cout << std::endl;
// 	std::cout << b->getType() << std::endl;
// 	std::cout << std::endl;

// 	// c->clone();
// 	b->clone();
// 	std::cout << std::endl;

// 	delete b;
// 	b = 0;
// 	// delete c;
// 	// c = 0;

// 	{
// 		std::cout << std::endl;
// 		Character newChar("CAM");
// 		newChar.use(1, b->getType());
// 	}
// 	return (0);
// }