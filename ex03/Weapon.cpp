#include "Weapon.hpp"

Weapon::Weapon(std::string value)
{
	setType(value);
}

Weapon::~Weapon(void)
{

}

const std::string&	Weapon::getType() const
{
	return	(type);
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}