#include "Convert.hpp"

int main(int argc, char **argv) {
	try {
		if (argc != 2) {
			std::cout << RED"Incorrect number of arguments!"RESET << std::endl;
			return (1);
		}
		Convert convert(argv[1]);
		convert.toChar();
		convert.toInt();
		convert.toFloat();
		convert.toDouble();
	}
	catch (const std::invalid_argument &e) {
		std::cerr << "Error : " << e.what() << std::endl;
	}
	std::cout << GREEN"Success!"RESET << std::endl;
	return (0);
}