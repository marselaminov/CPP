#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
//	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src) {
	*this = src;
//	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&	Cat::operator=(const Cat &src) {
//	std::cout << "Cat assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	type = src.type;
	return (*this);
}

Cat::~Cat() {
//	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "The cat is meowing!" << std::endl;
}