#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);
	std::cout << "FragTrap default constructor called" << this->getName() << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);
	std::cout << "Cool news, a fragtrap appeared ! " << name << " is his name, use it with respect & terror !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Darn it, the FragTrap " << this->getName() << " has been destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& obj)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &obj)
        ClapTrap::operator=(obj);
    return *this;
}

void FragTrap::highFivesGuys()
{
	if (this->getHP() == 0)
	{
		std::cout << this->getName() << " cannot high five, he is dead" << std::endl;
		return;
	}

	std::cout << "Hi guys ! i request the highest of five !" << std::endl;
}