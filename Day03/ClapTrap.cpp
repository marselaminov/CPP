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
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &src) {
	std::cout << "Assignation operator called" << std::endl;
	this->name = src.get_name();
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

std::string	ClapTrap::get_name() const {
	return (this->name);
}

void	ClapTrap::set_name(const std::string &src_name) {
	this->name = src_name;
}

void	ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap [" << this->name << "] attack" << target << ",";
	std::cout << "causing " << this->attack_damage << " points of damage!" << std::endl;
}

