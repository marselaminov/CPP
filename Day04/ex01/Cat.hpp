#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(Cat const &src);
	Cat & operator=(Cat const &src);
	virtual void makeSound() const;
	void	setIdea(int index, std::string idea);
	std::string	getIdea(int index) const;
	virtual ~Cat();

private:
	Brain	*brain;
};

#endif