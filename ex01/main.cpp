#include "Zombie.hpp"

int main()
{
	std::string name;
	int	num;

	std::cout << "give me a zombie name" << std::endl;
	std::cin >> name;
	std::cout << "number of zombie to create?" << std::endl;
	std::cin >> num;

	Zombie *loco;
	loco = zombieHorde(num, name);
	for(int i = 0; i < num; i++)
		loco[i].announce();
	delete [] loco;
}