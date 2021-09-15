#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal & operator=(WrongAnimal const &src);
	virtual ~WrongAnimal();

	void makeSound() const;
	std::string	getType() const;

protected:
	std::string	type;
};

#endif