#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
//	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) {
	*this = src;
//	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat	&	WrongCat::operator=(const WrongCat &src) {
//	std::cout << "WrongCat assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	type = src.type;
	return (*this);
}

WrongCat::~WrongCat() {
//	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "Cucarecu!" << std::endl;
}