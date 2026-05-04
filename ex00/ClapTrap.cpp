#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_HPoint = 100;
	_EPoint = 50;
	_ADamage = 20;
	std::cout << "Watch out, a claptrap named " << name;
	std::cout << " has been constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "All good, " << _name << " has been destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap" << " attack " << target;
	std::cout << " causing " << _ADamage << " damage point" << std::endl;
 }

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap" << " take " << amount;
	std::cout << " damage point" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap" << " repaired " << amount;
	std::cout << " Health Points" << std::endl;
}
