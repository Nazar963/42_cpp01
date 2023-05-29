#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:

		std::string	name;
		Weapon&		weapon;

		HumanA(std::string type, Weapon& weapon);
		~HumanA();

		void	attack(void);
};

#endif