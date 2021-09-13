#include "ClapTrap.hpp"

int main() {
	ClapTrap	first("Andrey");
	ClapTrap	second("Elena");
	ClapTrap	third;
	std::cout << "-----------------------------------" << std::endl;
	first.attack("Elena");
	second.takeDamage(first.getAttackDamage());
	third.attack("Andrey");
	first.takeDamage(third.getAttackDamage());
	std::cout << "-----------------------------------" << std::endl;
	third = second;
	std::cout << "-----------------------------------" << std::endl;
	third.beRepaired(24);
	std::cout << "-----------------------------------" << std::endl;
	third.info();
	std::cout << "-----------------------------------" << std::endl;
	second.info();
	std::cout << "-----------------------------------" << std::endl;
	return (0);
}