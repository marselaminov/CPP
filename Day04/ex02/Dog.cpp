#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &src) {
	std::cout << "Dog deep copy constructor called" << std::endl;
	if (src.getBrain()) {
		this->brain = new Brain();
		(*this->brain) = (*src.brain);
	}
}

Dog	&	Dog::operator=(const Dog &src) {
	std::cout << "Dog deep assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	delete this->brain;
	if (src.getBrain()) {
		this->brain = new Brain();
		this->brain = src.brain;
	}
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "The dog barks!" << std::endl;
}

void	Dog::setIdea(int index, std::string idea) {
	this->brain->ideas[index] = idea;
}

std::string	Dog::getIdea(int index) const {
	return (this->brain->ideas[index]);
}

void	Dog::printIdea(int i) const {
	std::cout << getIdea(i) << std::endl;
}

Brain	*Dog::getBrain() const {
	return (this->brain);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete	this->brain;
}
