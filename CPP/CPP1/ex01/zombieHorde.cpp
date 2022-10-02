#include "Zombie.hpp"

 Zombie*    zombieHorde( int N, std::string name )
 {
	int	i;
	Zombie *new_zombie = new Zombie[N];

	 i = 0;
	 while (i < N)
	 {
		new_zombie[i].set_name(name);
		i++;
	 }
	 return (new_zombie);
 }