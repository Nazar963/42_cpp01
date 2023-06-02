#include "Zombie.hpp"

int main()
{
	std::string name;

	std::cout << "give me a zombie name" << std::endl;
	std::cin >> name;
	Zombie *loco;
	loco = newZombie(name);
	for(int i = 0; i < 5; i++)
		loco[i].announce();
	randomChump(name);
	delete[] loco;
}