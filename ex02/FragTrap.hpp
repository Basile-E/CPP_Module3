#pragma once
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
	public :
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap& obj);
		~FragTrap();

		FragTrap &operator=(const FragTrap& obj);

		void highFivesGuys(void);
	private :
};
