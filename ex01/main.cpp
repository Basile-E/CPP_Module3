#include "ScavTrap.hpp"

int main()
{
	ClapTrap Clap("Clap");
	ScavTrap Scav("Scav");

	Clap.attack("Axton");
	Clap.takeDamage(10);
	Clap.beRepaired(10);

	Scav.attack("Lilith");
	Scav.takeDamage(10);
	Scav.beRepaired(10);
	Scav.guardGate();
}