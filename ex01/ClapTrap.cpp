#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "";
	_HPoint = 10;
	_EPoint = 10;
	_ADamage = 0;
	std::cout << "Default ClapTrap constructor called" << this->getName() << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
	_name = name;
	_HPoint = 10;
	_EPoint = 10;
	_ADamage = 0;
	std::cout << "Watch out, a claptrap named " << name;
	std::cout << " has been constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	_name = obj._name;
	_HPoint = obj._HPoint;
	_EPoint = obj._EPoint;
	_ADamage = obj._ADamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "All good, " << _name << " has been destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &obj)
	{
		_name = obj._name;
		_HPoint = obj._HPoint;
		_EPoint = obj._EPoint;
		_ADamage = obj._ADamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->getHP() <= 0)
	{
		std::cout << "Claptrap " << this->getName() << " cannot attack since he died" << std::endl;
		return;
	}
	if (this->getEP() > 0)
		this->setEP(this->getEP() - 1);
	else
	{
		std::cout << "ClapTrap " << this->getName() << " cannot attack without energy" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->getName() << " attack " << target;
	std::cout << " causing " << _ADamage << " damage point" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHP() == 0)
		return;
	std::cout << "ClapTrap " << this->getName() << " take " << amount;
	std::cout << " damage point" << std::endl;
	this->setHP(this->getHP() - amount);
	if (this->getHP() <= 0)
	{
		std::cout << this->getName() << " is dead :'(" << std::endl;
		this->setHP(0);
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHP() <= 0)
	{
		std::cout << "ClapTrap " << this->getName() << " cannot repaire itself since he died" << std::endl;
		return;
	}
	if (this->getEP() > 0)
		this->setEP(this->getEP() - 1);
	else
	{
		std::cout << "ClapTrap " << this->getName() << " cannot repaire itself without energy" << std::endl;
		return;
	}
	this->setHP(this->getHP() + amount);	
	std::cout << "ClapTrap" << " repaired " << amount;
	std::cout << " Health Points" << std::endl;
}

std::string ClapTrap::getName() const
{
	return(_name);
}

int ClapTrap::getHP() const
{
	return(_HPoint);
}

int ClapTrap::getEP() const
{
	return(_EPoint);
}

int ClapTrap::getAD() const
{
	return(_ADamage);
}

void ClapTrap::setName(const std::string& name)
{
	_name = name;
}

void ClapTrap::setHP(const int HP)
{
	_HPoint = HP;
}
void ClapTrap::setEP(const int EP)
{
	_EPoint = EP;
}
void ClapTrap::setAD(const int AD)
{
	_ADamage = AD;
}