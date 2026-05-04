#pragma once
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

		std::string getName();

		void setName(const std::string& name);
		void setHP(int HP);
		void setEP(int EP);
		void setAD(int AD);
	private :
		std::string _name;
		int _HPoint;
		int _EPoint;
		int _ADamage;
};

void ClapTrap::setHP(int HP)
{
	_HPoint = HP;
}
void ClapTrap::setEP(int EP)
{
	_EPoint = EP;
}
void ClapTrap::setAD(int AD)
{
	_ADamage = AD;
}