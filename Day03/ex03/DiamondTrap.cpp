#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap("Default_clap_name"), ScavTrap(), FragTrap() {
	this->name = "Default_name";
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points = 50;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap [" << this->name << "] constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)  {
	this->name = name;
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(50);
	this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap [" << this->name << "] constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ScavTrap(src), FragTrap(src) {
	std::cout << "DiamondTrap [" << this->name << "] copy constructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &src) {
	std::cout << "DiamondTrap [" << this->name << "] assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap [" << this->name << "] destructor called" << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage(unsigned int amount) {
	std::cout << "DiamondTrap [" << this->name << "] has taken " << amount;
	std::cout << " points of damage. ";
	if (amount >= energy_points) {
		this->energy_points = 0;
		std::cout << "DiamondTrap [" << this->name << "] is died" << std::endl;
	}
	else {
		this->energy_points -= amount;
		std::cout << "DiamondTrap [" << this->name << "] has " << energy_points;
		std::cout << " energy points in current time." << std::endl;
	}
}

void	DiamondTrap::beRepaired(unsigned int amount) {
	if (energy_points == 0) {
		this->energy_points = amount;
		std::cout << "DiamondTrap [" << this->name << "] has been repaired and back to life, ";
		std::cout << "now he has " << amount << " energy points." << std::endl;
	}
	else {
		this->energy_points += amount;
		std::cout << "DiamondTrap [" << this->name << "] has been repaired, ";
		std::cout << "he is take " << amount << " energy points, ";
		std::cout << "and now he has " << this->energy_points << " energy points." << std::endl;
	}
}

void 	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap [" << this->name << "] inherited from ClapTrap [";
	std::cout << ClapTrap::name << "]." << std::endl;
}

void	DiamondTrap::info() const {
	std::cout << "INFO ABOUT DIAMONDTRAP :" << std::endl;
	std::cout << "Name : " << this->name << std::endl;
	std::cout << "Hit points : " << this->hit_points << std::endl;
	std::cout << "Energy points : " << this->energy_points << std::endl;
	std::cout << "Attack damage : " << this->attack_damage << std::endl;
}