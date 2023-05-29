#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*loco = new Zombie[N];
	for (int i = 0; i < N; i++)
		loco[i].setName(name);
	return (loco);
}