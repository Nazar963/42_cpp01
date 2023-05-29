#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*loco = new Zombie[5];
	for (int i = 0; i < 5; i++)
		loco[i].setName(name);
	return (loco);
}