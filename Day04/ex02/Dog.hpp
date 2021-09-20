#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(Dog const &src);
	Dog & operator=(Dog const &src);
	virtual void	makeSound() const;
	void	setIdea(int index, std::string idea);
	std::string	getIdea(int index) const;
	void	printIdea(int i) const;
	Brain	*getBrain() const;
	virtual ~Dog();

private:
	Brain	*brain;
};

#endif