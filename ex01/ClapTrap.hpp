#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
	public :
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap& obj);
		~ClapTrap();

		ClapTrap &operator=(const ClapTrap &obj);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		
		void setName(const std::string& name);
		void setHP(const int HP);
		void setEP(const int EP);
		void setAD(const int AD);
		
		std::string getName() const;
		int getHP() const;
		int getEP() const;
		int getAD() const;
	private :
		std::string _name;
		int _HPoint;
		int _EPoint;
		int _ADamage;
};
