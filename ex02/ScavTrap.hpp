#pragma once
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& obj);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap &obj);

		void guardGate();
		void attack(const std::string& target);
	private :
};
