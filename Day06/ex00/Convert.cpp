#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(std::string num) : num(num) {}

Convert::Convert(const Convert &src) {
	if (this != &src)
		this->num = src.num;
}

Convert& Convert::operator=(const Convert &src) {
	if (this != &src)
		this->num = src.num;
	return (*this);
}

Convert::~Convert() {}

void	Convert::toChar() {
	int	c;

	try {
		c = stoi(this->num, 0, 10);
	}
	catch (const std::exception &e) {
		std::cerr << "char: impossible" << std::endl;
		return;
	}
	if (c < 32 || c >= 127) {
		std::cerr << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
}

void	Convert::toInt() {
	int	i;

	try {
		i = stoi(this->num, 0, 10);
	}
	catch (const std::exception &e) {
		std::cerr << "int: impossible" << std::endl;
		return;
	}
	std::cout << "int: " << static_cast<int>(i) << std::endl;
}

void	Convert::toFloat() {
	float	f;

	try {
		f = stof(this->num, 0);
	}
	catch (const std::exception &e) {
		std::cerr << "float: nanf" << std::endl;
		return;
	}
	std::cout << "float: " << std::fixed; // opportunity to set precision after dot
	std::cout << std::setprecision(1); // set precision to 1
	std::cout << static_cast<float >(f) << "f" << std::endl;
}

void	Convert::toDouble() {
	float	d;

	try {
		d = stod(this->num, 0);
	}
	catch (const std::exception &e) {
		std::cerr << "double: nan" << std::endl;
		return;
	}
	std::cout << "double: " << std::fixed; // opportunity to set precision after dot
	std::cout << std::setprecision(1); // set precision to 1
	std::cout << static_cast<double >(d) << std::endl;
}