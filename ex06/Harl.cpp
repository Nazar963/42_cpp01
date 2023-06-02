#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

struct	FunctionMapping
{
	std::string name;
	void (Harl::*func)();
};

void Harl::complain(std::string level)
{
	int	i = 0;

	FunctionMapping mappings[] =
	{
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error},
	};

	for (i = 0; i < 4; i++)
	{
		if (mappings[i].name == level)
			break ;
	}

	switch (i)
	{
		case 0:
			(this->*(mappings[0].func))();
			// fall through
		case 1:
			(this->*(mappings[1].func))();
			// fall through
		case 2:
			(this->*(mappings[2].func))();
			// fall through
		case 3:
			(this->*(mappings[3].func))();
			break ;
		default:
			std::cout << "wrong argument" << std::endl;
	}
}