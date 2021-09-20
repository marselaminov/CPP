#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << "j pointer is a : " << j->getType() << std::endl;
	std::cout << "He's doing : ";
	j->makeSound(); //will output the dog sound!

	std::cout << "i pointer is a : " << i->getType() << std::endl;
	std::cout << "He's doing : ";
	i->makeSound(); //will output the cat sound!

	delete	j;
	delete	i;

	// abstract class testing
//	const Animal	*meta = new Animal("Animal");
//	std::cout << "meta pointer is a : " << meta->getType() << std::endl;
//	std::cout << "He's doing : ";
//	meta->makeSound(); // not any output
//	delete	meta;

	return (0);
}