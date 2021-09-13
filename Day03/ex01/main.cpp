#include "ScavTrap.hpp"

int main() {
	ScavTrap	first("Jon");
	ScavTrap	second("Sam");
	ScavTrap	third;

	std::cout << "-----------------------------------" << std::endl;
	first.attack("Sam");
	second.takeDamage(first.getAttackDamage());
	std::cout << "..." << std::endl;
	third.attack("Jon");
	first.guardGate();
	first.takeDamage(third.getAttackDamage());
	std::cout << "-----------------------------------" << std::endl;

	third = second;

	std::cout << "-----------------------------------" << std::endl;

	third.beRepaired(22);

	std::cout << "-----------------------------------" << std::endl;

	third.info();

	std::cout << "-----------------------------------" << std::endl;

	first.info();

	std::cout << "-----------------------------------" << std::endl;

	return (0);
}