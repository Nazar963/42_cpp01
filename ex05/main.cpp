#include "Harl.hpp"

int	main(void)
{
	Harl	bar;
	std::string	result;

	std::cout << "choose one of these options: DEBUG, INFO, WARNING, ERROR" << std::endl;
	std::cin >> result;
	bar.complain(result);

}