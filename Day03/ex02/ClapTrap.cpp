#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	name("Default name"), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	name(name), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap [" << name << "] constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << "ClapTrap [" << this->name << "] copy constructor called" << std::endl;
	*this = src;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &src) {
	std::cout << "ClapTrap [" << this->name << "] assignation operator called" << std::endl;
    if (this == &src)
        return (*this);
	this->name = src.getName();
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap [" << this->name << "] destructor called" << std::endl;
}

std::string	ClapTrap::getName() const {
	return (this->name);
}

unsigned int ClapTrap::getAttackDamage() const {
	return (this->attack_damage);
}

void	ClapTrap::setName(const std::string &src_name) {
	this->name = src_name;
}

void	ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap [" << this->name << "] attack " << target << ", ";
	std::cout << "causing " << this->attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap [" << this->name << "] has taken " << amount;
	std::cout << " points of damage." << std::endl;
	if (amount >= energy_points) {
		this->energy_points = 0;
		std::cout << "ClapTrap [" << this->name << "] is died" << std::endl;
	}
	else {
		this->energy_points -= amount;
		std::cout << "ClapTrap [" << this->name << "] has " << energy_points;
		std::cout << " energy points in current time." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (energy_points == 0) {
		this->energy_points = amount;
		std::cout << "ClapTrap [" << this->name << "] has been repaired and back to life, ";
		std::cout << "now he has " << amount << " energy points." << std::endl;
	}
	else {
		this->energy_points += amount;
		std::cout << "ClapTrap [" << this->name << "] has been repaired, ";
		std::cout << "he is take " << amount << " energy points, ";
		std::cout << "and now he has " << this->energy_points << " energy points." << std::endl;
	}
}

void	ClapTrap::info() const {
	std::cout << "INFO ABOUT CLABTRAP :" << std::endl;
	std::cout << "Name : " << this->name << std::endl;
	std::cout << "Hit points : " << this->hit_points << std::endl;
	std::cout << "Energy points : " << this->energy_points << std::endl;
	std::cout << "Attack damage : " << this->attack_damage << std::endl;
}
