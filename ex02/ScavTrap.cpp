#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "a scavtrap is being made named : " << name << std::endl;
	//this->setName("test bitch");
}

ScavTrap::~ScavTrap()
{
	std::cout << "scavtrap destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now in gatekeep mode " << "you will never know where he got that cool shirt" << std::endl;
}
