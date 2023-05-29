#include "HumanB.hpp"

HumanB::HumanB(std::string value)
{
	name = value;
}

HumanB::~HumanB()
{

}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	weapon = weapon;
}