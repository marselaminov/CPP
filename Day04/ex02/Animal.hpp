#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define BLUE    "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN    "\x1b[36m"
# define RESET   "\x1b[0m"

class Animal {
public:
	Animal();
	Animal(std::string type);
	Animal(Animal const &src);
	Animal & operator=(Animal const &src);
	virtual ~Animal();

	virtual void makeSound() const = 0;
	std::string	getType() const;

protected:
	std::string	type;
};

#endif