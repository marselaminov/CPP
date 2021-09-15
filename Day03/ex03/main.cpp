#include "DiamondTrap.hpp"

int main() {
	ScavTrap	first("Jon");
	DiamondTrap	second("Sam");
	FragTrap	third;

	std::cout << "-----------------------------------" << std::endl;
	first.attack("Sam");
	second.takeDamage(first.getAttackDamage());
	second.whoAmI();
	std::cout << "..." << std::endl;
	third.highFivesGuys();
	third.attack("Jon");
	first.guardGate();
	first.takeDamage(third.getAttackDamage());
	std::cout << "-----------------------------------" << std::endl;
	second.beRepaired(14);
	std::cout << "-----------------------------------" << std::endl;
	second.info();
	std::cout << "-----------------------------------" << std::endl;
	return (0);
}