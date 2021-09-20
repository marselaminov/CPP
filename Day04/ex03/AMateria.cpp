#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const std::string &type) : type(type) {}

AMateria::AMateria(const AMateria &src) {
	*this = src;
}

AMateria & AMateria::operator=(const AMateria &src) {
	if (this == &src)
		return (*this);
	this->type = src.type;
	return (*this);
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const {
	return (this->type);
}

void	AMateria::use(ICharacter &target) {
	(void)target;
	std::cout << "Error : no type materia!" << std::endl;
}