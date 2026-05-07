#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
	std::cout << "Scavtrap default constructor called" << this->getName() << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "a scavtrap is being made named : " << name << std::endl;
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "scavtrap destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &obj)
		ClapTrap::operator=(obj);
	return (*this);
}

void ScavTrap::guardGate()
{
	if (this->getHP() == 0)
	{
		std::cout << this->getName() << " cannot gate keep, he is dead" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->getName() << " is now in gatekeep mode " << "you will never know where he got that cool shirt" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getHP() <= 0)
	{
		std::cout << "Scavtrap " << this->getName() << " cannot attack since he died" << std::endl;
		return;
	}
	if (this->getEP() > 0)
		this->setEP(this->getEP() - 1);
	else
	{
		std::cout << "ScavTrap " << this->getName() << " cannot attack without energy" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->getName() << " attack " << target;
	std::cout << " causing " << this->getAD() << " damage point" << std::endl;
}