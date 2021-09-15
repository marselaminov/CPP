#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal	*meta = new Animal("Animal");
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << "meta pointer is a : " << meta->getType() << std::endl;
	std::cout << "He's doing : ";
	meta->makeSound(); //will output the animal parent sound!

	std::cout << "j pointer is a : " << j->getType() << std::endl;
	std::cout << "He's doing : ";
	j->makeSound(); //will output the dog sound!

	std::cout << "i pointer is a : " << i->getType() << std::endl;
	std::cout << "He's doing : ";
	i->makeSound(); //will output the cat sound!

	delete	meta;
	delete	j;
	delete	i;


	std::cout <<"......................................" << std::endl;


	const WrongAnimal	*animal = new WrongAnimal("WrongAnimal");
	const WrongAnimal	*cat = new WrongCat();

	std::cout << "animal pointer is a : " << animal->getType() << std::endl;
	std::cout << "He's doing : ";
	animal->makeSound();

	std::cout << "cat pointer is a : " << cat->getType() << std::endl;
	std::cout << "He's doing : ";
	cat->makeSound(); // will not work because the method is not virtual, will always call the parent method
	// so that's polymorphism baby!
	delete	animal;
	delete	cat;

	return (0);
}