#include "ClapTrap.hpp"

int main() {
	ClapTrap	first("Andrey");
	ClapTrap	second("Elena");
	ClapTrap	third;
	std::cout << "-----------------------------------" << std::endl;
	first.attack("Elena");
	second.takeDamage(first.get_attack_damage());
	third.attack("Andrey");
	first.takeDamage(third.get_attack_damage());
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