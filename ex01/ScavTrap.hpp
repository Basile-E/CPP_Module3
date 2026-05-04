#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap(std::string name);
		~ScavTrap();

		void guardGate();
	private :

};
