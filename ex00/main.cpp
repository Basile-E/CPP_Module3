#include "ClapTrap.hpp"

int main()
{
	ClapTrap Clap("Clap");

	Clap.attack("Axton");
	Clap.takeDamage(10);
	Clap.beRepaired(10);
}