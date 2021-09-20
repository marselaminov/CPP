#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &src) : AMateria("ice") {
	*this = src;
}

Ice & Ice::operator=(const Ice &src) {
	if (this == &src)
		return (*this);
	this->type = src.type;
	return (*this);
}

Ice::~Ice() {}

Ice* Ice::clone() const {
	Ice *a = new Ice(*this);
	return (a);
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() + " *" << std::endl;
}