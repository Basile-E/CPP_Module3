#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setAD(100);
	this->setEP(100);
	this->setAD(30);
	std::cout << "Cool news, a fragtrap appeared ! " << name << " is his name, use it with respect & terror !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Darn it, the ScravTrap " << this->getName() << " has been destroyed" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "Hi guys ! i request the highest of five !" << std::endl;
}