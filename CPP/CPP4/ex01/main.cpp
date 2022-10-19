#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{

	{
		Dog	*dog = new Dog();
		Dog *dog2 = new Dog("CHIEN");

		*dog = *dog2;
		delete dog;
		dog = 0;
		delete dog2;
		dog2= 0;
	}
		
	{
		std::cout << "/*** Constructors par defauts ***/" << std::endl;

		Animal* tab[10];

		for (int i = 0; i < 10; i++)
		{
			if (i % 2)
				tab[i] = new Dog();
			else
				tab[i] = new Cat();
		}

			for (int i = 0; i < 10; i++)
		{
			tab[i]->makeSound();
		}
		
		for (int i = 0; i < 10; i++)
		{
			delete tab[i];
			tab[i] = 0;
		}
	}
	{
		std::cout << "/*** Constructors par copie ***/" << std::endl;

		Dog *dog = new Dog();
		std::cout << std::endl;

		dog->setIdea(0, "FOOD");
		std::cout << dog->getIdea(0) << std::endl;
		dog->setIdea(1, "SLEEP");
		std::cout << dog->getIdea(1) << std::endl;
		dog->setIdea(0, "ER");
		std::cout << dog->getIdea(0) << std::endl;
		std::cout << std::endl;


		Dog	*dog_bis = new Dog(*dog);
		std::cout << std::endl;

		dog_bis->setIdea(10, "FOOD");
		std::cout << dog_bis->getIdea(0) << std::endl;
		dog_bis->setIdea(56, "SLEEP");
		std::cout << dog_bis->getIdea(1) << std::endl;
		dog_bis->setIdea(99, "ER");
		std::cout << dog_bis->getIdea(0) << std::endl;
		std::cout << std::endl;

		delete dog;
		dog = 0;
		delete dog_bis;
		dog_bis = 0;
	}

	return 0;

}


	// Animal	*animals[100];

	// std::cout << " *** Creating 50 dogs then 50 cats from Animal class *** " \
	// << std::endl;

	// for (int i = 0; i < 50; i++)
	// 	animals[i] = new Dog();

	// for (int i = 50; i < 100; i++)
	// 	animals[i] = new Cat();

	// std::cout << std::endl;
	// std::cout << " *** Checking their types *** " << std::endl;

	// for (int i = 0; i < 100; i++)
	// 	std::cout << "This animal type is " << animals[i]->getType() << \
	// 	"." << std::endl;

	// std::cout << std::endl;
	// std::cout << " *** Setting an idea to the 25th dog and the last cat *** " \
	// << std::endl;

	// animals[24]->setIdea(0, "woofie woof woof?");
	// animals[99]->setIdea(99, "meoow meeeeooooooooow!!!");

	// std::cout << std::endl;
	// std::cout << " *** Reading those ideas *** " << std::endl;

	// std::cout << "Dog is having an idea: " << animals[24]->getIdea(0) << std::endl;
	// std::cout << "Cat is having an idea: " << animals[99]->getIdea(99) << std::endl;

	// std::cout << std::endl;
	// std::cout << " *** Trying to set an idea too big for the brain *** " \
	// << std::endl;

	// animals[0]->setIdea(100, "WOOOOOOOOOOF");

	// std::cout << std::endl;
	// std::cout << " *** Cleaning *** " << std::endl;
	// for (int i = 0; i < 100; i++)
	// 	delete animals[i];

	// return (0);






















	// {
	// 	std::cout << "/*** Constructors par defauts ***/" << std::endl;
	// 	const Animal* meta = new Animal();
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();
	// 	std::cout << std::endl;
	// 	std::cout << j->getType() << " " << std::endl;
	// 	std::cout << i->getType() << " " << std::endl;
	// 	std::cout << std::endl;
	// 	i->makeSound(); //will output the cat sound!
	// 	j->makeSound();
	// 	meta->makeSound();
	// 	std::cout << std::endl;
	// 	delete j;
	// 	j = 0;
	// 	delete i;
	// 	i = 0;
	// 	delete meta;
	// 	meta = 0;
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << "/*** Constructors surcharges ***/" << std::endl;
	// 	const Animal* meta = new Animal();
	// 	const Animal* j = new Dog("CHIEN");
	// 	const Animal* i = new Cat("CHAT");
	// 	std::cout << std::endl;
	// 	std::cout << j->getType() << " " << std::endl;
	// 	std::cout << i->getType() << " " << std::endl;
	// 	std::cout << std::endl;
	// 	i->makeSound(); //will output the cat sound!
	// 	j->makeSound();
	// 	meta->makeSound();
	// 	std::cout << std::endl;
	// 	delete j;
	// 	j = 0;
	// 	delete i;
	// 	i = 0;
	// 	delete meta;
	// 	meta = 0;
	// }
	// {
	// 	std::cout << std::endl;
	// 	std::cout << "/*** Constructors par copies ***/" << std::endl;
	// 	const Animal* meta = new Animal();
	// 	const Animal* j = new Dog();
	//  	const Animal* j_bis = new Dog(j);
	// 	const Animal* i = new Cat("CHAT");
	// 	std::cout << std::endl;
	// 	std::cout << j->getType() << " " << std::endl;
	// 	std::cout << i->getType() << " " << std::endl;
	// 	std::cout << std::endl;
	// 	i->makeSound(); //will output the cat sound!
	// 	j->makeSound();
	// 	meta->makeSound();
	// 	std::cout << std::endl;
	// 	delete j;
	// 	j = 0;
	// 	delete i;
	// 	i = 0;
	// 	delete meta;
	// 	meta = 0;
	// }