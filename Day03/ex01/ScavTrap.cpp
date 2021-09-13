#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap [" << this->name << "] constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) {
	std::cout << "ScavTrap [" << this->name << "] Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &src) {
	std::cout << "ScavTrap [" << this->name << "] assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	this->name = src.getName();
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap [" << this->name << "] destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap [" << this->name << "] attack [" << target << "], ";
	std::cout << "causing " << this->attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "ScavTrap [" << this->name << "] has taken " << amount;
	std::cout << " points of damage. ";
	if (amount >= energy_points) {
		this->energy_points = 0;
		std::cout << "ScavTrap [" << this->name << "] is died" << std::endl;
	}
	else {
		this->energy_points -= amount;
		std::cout << "ScavTrap [" << this->name << "] has " << energy_points;
		std::cout << " energy points in current time." << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (energy_points == 0) {
		this->energy_points = amount;
		std::cout << "ScavTrap [" << this->name << "] has been repaired and back to life, ";
		std::cout << "now he has " << amount << " energy points." << std::endl;
	}
	else {
		this->energy_points += amount;
		std::cout << "ScavTrap [" << this->name << "] has been repaired, ";
		std::cout << "he is take " << amount << " energy points, ";
		std::cout << "and now he has " << this->energy_points << " energy points." << std::endl;
	}
}

void 	ScavTrap::guardGate() {
	if (energy_points) {
		std::cout << "ScavTrap [" << this->name << "] entered to gate keeper mode." << std::endl;
	}
	else {
		std::cout << "ScavTrap [" << this->name << "] couldn't entered to gate keeper mode, ";
		std::cout << "because he has not enough energy points, this number is - ";
		std::cout << this->energy_points << std::endl;
	}
}

void	ScavTrap::info() const {
	std::cout << "INFO ABOUT SCAVTRAP :" << std::endl;
	std::cout << "Name : " << this->name << std::endl;
	std::cout << "Hit points : " << this->hit_points << std::endl;
	std::cout << "Energy points : " << this->energy_points << std::endl;
	std::cout << "Attack damage : " << this->attack_damage << std::endl;
}