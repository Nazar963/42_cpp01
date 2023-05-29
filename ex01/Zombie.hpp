#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie
{
	public:

		Zombie();
		~Zombie();

		void	announce(void);

		void	setName(std::string name)
		{
			_name = name;
		}

	private:

		std::string _name;
};

Zombie*	zombieHorde(int num, std::string name);

#endif