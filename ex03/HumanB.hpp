#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:

		std::string	name;
		Weapon		*weapon;

		HumanB(std::string value);
		~HumanB();

		void	attack(void);
		void	setWeapon(Weapon& weapon);
};

#endif