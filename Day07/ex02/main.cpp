#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**) {
	Array<int> numbers(MAX_VAL);

	int* mirror = new int[MAX_VAL];

	srand(time(NULL));

	for (int i = 0; i < MAX_VAL; i++) {
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	for (int i = 0; i < MAX_VAL; i++) {
		if (mirror[i] != numbers[i]) {
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	delete[] mirror;
	std::cout << GREEN"My array has been successfully filled with random values"RESET << std::endl;

	std::cout << "---------------------------------------------------------------" << std::endl;

	Array<int> tmp = numbers;
	Array<int> test(tmp);

	for (int i = 0; i < MAX_VAL; i++) {
		if (mirror[i] != numbers[i]) {
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	std::cout << GREEN"Copy constructor completed successfully"RESET << std::endl;

	std::cout << "---------------------------------------------------------------" << std::endl;

	try {
		numbers[4] = 5; // invalid index
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << "numbers[" << 4 << "] = " << numbers[4] << std::endl;

	std::cout << "---------------------------------------------------------------" << std::endl;

	try {
		numbers[-2] = 0; // invalid index
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------------------------------------------------------------" << std::endl;

	try {
		numbers[MAX_VAL] = 0; // invalid index
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------------------------------------------------------------" << std::endl;

	for (int i = 0; i < 5; i++) {
		numbers[i] = i;
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl; // printing for example
	}
	std::cout << GREEN"Part of the 'numbers' array was overwritten"RESET << std::endl;

	return 0;
}