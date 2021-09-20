#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &src) {
	std::cout << "Cat deep copy constructor called" << std::endl;
	if (src.getBrain()) {
		this->brain = new Brain();
		(*this->brain) = (*src.brain);
	}
}

Cat	&	Cat::operator=(const Cat &src) {
	std::cout << "Cat deep assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	delete this->brain;
	if (src.getBrain()) {
		this->brain = new Brain();
		this->brain = src.brain;
	}
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "The cat is meowing!" << std::endl;
}

void	Cat::setIdea(int index, std::string idea) {
	this->brain->ideas[index] = idea;
}

std::string	Cat::getIdea(int index) const {
	return (this->brain->ideas[index]);
}

void	Cat::printIdea(int i) const {
	std::cout << getIdea(i) << std::endl;
}

Brain	*Cat::getBrain() const {
	return (this->brain);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete	this->brain;
}
