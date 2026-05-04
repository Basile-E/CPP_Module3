#include <iostream>
#include <string>

class ClapTrap
{
	public :
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private :
		std::string _name;
		int _HPoint;
		int _EPoint;
		int _ADamage;
};
