#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &src) {
	*this = src;
	std::cout << "Dog deep copy constructor called" << std::endl;
}

Dog	&	Dog::operator=(const Dog &src) {
	std::cout << "Dog deep assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	type = src.type;
	for (int i = 0; i < 100; i++) {
		this->brain->ideas[i] = src.brain->ideas[i];
	}
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "The dog barks!" << std::endl;
}

void	Dog::setIdea(int index, std::string idea) {
	this->brain->ideas[index] = idea;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete	this->brain;
}