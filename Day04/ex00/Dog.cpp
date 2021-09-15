#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
//	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src) {
	*this = src;
//	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&	Dog::operator=(const Dog &src) {
//	std::cout << "Dog assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	type = src.type;
	return (*this);
}

Dog::~Dog() {
//	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "The dog barks!" << std::endl;
}