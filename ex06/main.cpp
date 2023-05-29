#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	bar;
	if (ac == 2)
	{
		bar.complain(av[1]);
	}
	else
		std::cout << "wrong number of arguments" << std::endl;
	return (0);
}