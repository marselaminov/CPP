#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &src) {
	*this = src;
	std::cout << "Cat deep copy constructor called" << std::endl;
}

Cat	&	Cat::operator=(const Cat &src) {
	std::cout << "Cat deep assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	type = src.type;
	for (int i = 0; i < 100; i++) {
		this->brain->ideas[i] = src.brain->ideas[i];
	}
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "The cat is meowing!" << std::endl;
}

void	Cat::setIdea(int index, std::string idea) {
	this->brain->ideas[index] = idea;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete	this->brain;
}
