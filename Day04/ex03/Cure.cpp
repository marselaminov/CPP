#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &src) : AMateria("cure") {
	*this = src;
}

Cure & Cure::operator=(const Cure &src) {
	if (this == &src)
		return (*this);
	this->type = src.type;
	return (*this);
}

Cure::~Cure() {}

Cure* Cure::clone() const {
	Cure *a = new Cure(*this);
	return (a);
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}