#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "get ready for some constructor :\n" << std::endl;
	ClapTrap Clap("Clap");
	ScavTrap Scav("Scav");
	FragTrap Frag("Frag");
	FragTrap TestCop("TestCop");
	ClapTrap TestCop2("TestCop2");

	std::cout << "\nClaptrap output :\n" << std::endl;
	Clap.attack("Axton");
	Clap.takeDamage(10);
	Clap.beRepaired(10);

	std::cout << "\nScavtrap output :\n" << std::endl;


	Scav.attack("Lilith");
	Scav.takeDamage(10);
	Scav.beRepaired(10);
	Scav.guardGate();

	std::cout << "\nFragtrap output :\n" << std::endl;

	Frag.attack("A random bystander");
	Frag.takeDamage(10);
	Frag.beRepaired(10);
	Frag.highFivesGuys();

	std::cout << "\n Copy operator inerithance test\n" << std::endl;

	std::cout << TestCop2.getAD() << " before copy" << std::endl;
	TestCop2 = TestCop;
	std::cout << TestCop2.getAD() << " after copy should be 30" << std::endl;


	std::cout << "\nAnd now some destructors :\n" << std::endl;
}