#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
	ideas = new	std::string[100];
	for (int i = 0; i < 100; ++i)
		ideas[i] = "there are empty thoughts";
}

Brain::Brain(const Brain &src) {
	std::cout << "Brain deep copy constructor called" << std::endl;
	if (src.ideas) { // check if != null
		ideas = new std::string[100]; // allocate memory for our copy
		for (int i = 0; i < 100; ++i) // making copy values
			ideas[i] = src.ideas[i];
	}
}

Brain	&	Brain::operator=(const Brain &src) {
	std::cout << "Brain assignation operator called" << std::endl;
	if (this == &src) // check for self-assignment
		return (*this);
	delete[] this->ideas; // we need to clear the previous value of ideas
	if (src.ideas) { // check if != null
		ideas = new std::string[100]; // allocate memory for our copy
		for (int i = 0; i < 100; ++i) // making copy values
			ideas[i] = src.ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain default destructor called" << std::endl;
	delete[] this->ideas; // free allocated memory
}