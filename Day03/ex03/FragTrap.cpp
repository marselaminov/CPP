#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap [" << this->name << "] constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) {
    std::cout << "FragTrap [" << this->name << "] Copy constructor called" << std::endl;
    *this = src;
}

FragTrap & FragTrap::operator=(const FragTrap &src) {
    std::cout << "FragTrap [" << this->name << "] assignation operator called" << std::endl;
    if (this == &src)
        return (*this);
    this->name = src.getName();
    this->hit_points = src.hit_points;
    this->energy_points = src.energy_points;
    this->attack_damage = src.attack_damage;
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap [" << this->name << "] destructor called" << std::endl;
}

void	FragTrap::attack(const std::string &target) {
    std::cout << "FragTrap [" << this->name << "] attack [" << target << "], ";
    std::cout << "causing " << this->attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
    std::cout << "FragTrap [" << this->name << "] has taken " << amount;
    std::cout << " points of damage. ";
    if (amount >= energy_points) {
        this->energy_points = 0;
        std::cout << "FragTrap [" << this->name << "] is died" << std::endl;
    }
    else {
        this->energy_points -= amount;
        std::cout << "FragTrap [" << this->name << "] has " << energy_points;
        std::cout << " energy points in current time." << std::endl;
    }
}

void	FragTrap::beRepaired(unsigned int amount) {
    if (energy_points == 0) {
        this->energy_points = amount;
        std::cout << "FragTrap [" << this->name << "] has been repaired and back to life, ";
        std::cout << "now he has " << amount << " energy points." << std::endl;
    }
    else {
        this->energy_points += amount;
        std::cout << "FragTrap [" << this->name << "] has been repaired, ";
        std::cout << "he is take " << amount << " energy points, ";
        std::cout << "and now he has " << this->energy_points << " energy points." << std::endl;
    }
}

void 	FragTrap::highFivesGuys() {
    std::cout << "FragTrap [" << this->name << "] is tell : give me your five, guys!" << std::endl;
}

void	FragTrap::info() const {
    std::cout << "INFO ABOUT FRAGTRAP :" << std::endl;
    std::cout << "Name : " << this->name << std::endl;
    std::cout << "Hit points : " << this->hit_points << std::endl;
    std::cout << "Energy points : " << this->energy_points << std::endl;
    std::cout << "Attack damage : " << this->attack_damage << std::endl;
}