#include "Character.hpp"

Character::Character() : name("Default"), equipped(0) {
//	std::cout << "Character constructor called" << std::endl;
}

Character::Character(std::string const &name) : name(name), equipped(0) {
//	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; ++i)
		invent[i] = NULL;
}

Character::Character(const Character &src) : name(src.name), equipped(src.equipped) {
//	std::cout << "Character deep copy constructor called" << std::endl;
	for (int i = 0; i < 4; ++i) {
		if (src.invent[i])
			this->invent[i] = this->invent[i]->clone();
		else
			this->invent[i] = NULL;
	}
}

Character & Character::operator=(const Character &src) {
//	std::cout << "Character deep assignation operator is called" << std::endl;
	if (this == &src)
		return (*this);
	this->equipped = src.equipped;
	this->name = src.name;
	for (int i = 0; i < 4; ++i)
		delete this->invent[i];
	for (int i = 0; i < 4; ++i) {
		if (src.invent[i])
			this->invent[i] = this->invent[i]->clone();
		else
			this->invent[i] = NULL;
	}
	return (*this);
}

Character::~Character() {
//	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; ++i)
		delete this->invent[i];
}

std::string const & Character::getName() const {
	return (this->name);
}

void	Character::equip(AMateria *m) {
	if (equipped == 4 || m == NULL)
		return;
	this->invent[this->equipped] = m;
	++this->equipped;
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 4|| idx >= this->equipped || this->invent[idx] == NULL)
		return;
	for (int i = idx; i < (4 - 1); ++i) {
		this->invent[i] = this->invent[i + 1];
		this->invent[i + 1] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 4|| idx >= this->equipped || this->invent[idx] == NULL)
		return;
	this->invent[idx]->use(target);
}