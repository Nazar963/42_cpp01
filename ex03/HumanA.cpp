#include "HumanA.hpp"

HumanA::HumanA(std::string type, Weapon& weapon): weapon(weapon)
{
	name = type;
}

HumanA::~HumanA()
{

}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}