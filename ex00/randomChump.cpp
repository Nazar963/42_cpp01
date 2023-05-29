#include "Zombie.hpp"

void randomChump( std::string name )
{
	int i  = 0;

	do
	{
		i++;
		std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	} while (i < 5);
	
}
