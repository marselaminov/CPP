#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	std::cout << BLUE"SIMPLE LEAKS TESTING"RESET << std::endl;
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	std::cout << "......................................" << std::endl;
	delete j;//should not create a leak
	delete i;
	std::cout << std::endl;

	std::cout << MAGENTA"CREATING AND DELETING ANIMALS ARRAY"RESET << std::endl;
	int	size = 10;
	Animal	*animalsArr[size];

	for (int n = 0; n < size; ++n) {
		if (n % 2 == 0) {
			std::cout << "animal number " << n << " : ";
			animalsArr[n] = new Dog();
		}
		else {
			std::cout << "animal number " << n << " : ";
			animalsArr[n] = new Cat();
		}
	}
	std::cout << "......................................" << std::endl;
	for (int n = 0; n < size; ++n) {
		delete	animalsArr[n];
	}
	std::cout << std::endl;

	std::cout << GREEN"TESTING OF DEEP COPY"RESET << std::endl;
	Dog	dog1;
	std::cout << "......................................" << std::endl;
	// set not empty idea for first dog on third index
	std::cout << "First dog's idea on third index before : ";
	dog1.printIdea(3);
	dog1.setIdea(3, "I wanna eat!");
	std::cout << "First dog's idea on third index after : ";
	dog1.printIdea(3);
	std::cout << "......................................" << std::endl;
	// deep copy process
	Dog	dog2(dog1);
	std::cout << "......................................" << std::endl;
	// result
	std::cout << "Second dog's idea on third index after deep copying : ";
	dog2.printIdea(3);
	std::cout << "......................................" << std::endl;
	return (0);
}