#include "Animal.hpp"

Animal::Animal() : type("Default") {
//	std::cout << "Animal default constructor called (without type)" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
//	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src) {
	*this = src;
//	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&	Animal::operator=(const Animal &src) {
//	std::cout << "Animal assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	type = src.type;
	return (*this);
}

std::string	Animal::getType() const {
	return (this->type);
}

Animal::~Animal() {
//	std::cout << "Animal destructor called" << std::endl;
}
