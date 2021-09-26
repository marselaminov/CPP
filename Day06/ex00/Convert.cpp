#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(std::string arg) : arg(arg) {}

Convert::Convert(const Convert &src) {
	if (this != &src)
		this->arg = src.arg;
}

Convert& Convert::operator=(const Convert &src) {
	if (this != &src)
		this->arg = src.arg;
	return (*this);
}

Convert::~Convert() {}

void	Convert::toChar() {
	if (this->arg.length() == 1 && (std::isprint(this->arg[0]) && !std::isdigit(this->arg[0]))) {
		std::cout << "char: '" << static_cast<unsigned char>(this->arg[0]) << "'" << std::endl;
		return;
	}
	//----------------------------------------------------------------------------------
	long	l = atol(this->arg.c_str());

	if (l < -2147483648 || l > 2147483647 || (!l && this->arg.compare("0"))) {
		std::cerr << "int: impossible" << std::endl;
		return;
	}
	//----------------------------------------------------------------------------------
	int	i = static_cast<int>(l);

	if (i > -1 && i < 256 && (i < 32 || i > 127)) {
		std::cerr << "char: Non displayable" << std::endl;
		return;
	}
	//----------------------------------------------------------------------------------
	if ((this->arg.length() > 1 && !i) || i > 255 || i < 0) {
		std::cerr << "char: impossible" << std::endl;
		return;
	}
	//----------------------------------------------------------------------------------
	std::cout << "char: '" << static_cast<unsigned char>(i) << "'" << std::endl;
}

void	Convert::toInt() {
	long	l = atol(this->arg.c_str());

	if (l < -2147483648 || l > 2147483647 || (!l && this->arg.compare("0"))) {
		std::cerr << "int: impossible" << std::endl;
		return;
	}
	std::cout << "int: " << static_cast<int>(l) << std::endl;
}

bool	isNanf(std::string const arg) {
	return (arg.compare(0, 4, "-inf") + arg.compare(0, 4, "+inf") +
			arg.compare(0, 3, "inf") + arg.compare(0, 3, "nan"));
}

void	Convert::toFloat() {
	float	f = static_cast<float>(atof(this->arg.c_str()));

	if (((std::isnan(f) || std::isinf(f)) && !isNanf(this->arg)) ||
			(f == 0.000000 && this->arg.length() > 1)) {
		std::cerr << "float: impossible" << std::endl;
		return;
	}
	std::cout << "float: " << std::fixed; // opportunity to set precision after dot
	std::cout << std::setprecision(1); // set precision to 1
	std::cout << f << "f" << std::endl;
}

void	Convert::toDouble() {
	double	d = static_cast<double>(atof(this->arg.c_str()));

	if (((std::isnan(d) || std::isinf(d)) && !isNanf(this->arg)) ||
		(d == 0.000000 && this->arg.length() > 1)) {
		std::cerr << "double: impossible" << std::endl;
		return;
	}
	std::cout << "double: " << std::fixed; // opportunity to set precision after dot
	std::cout << std::setprecision(1); // set precision to 1
	std::cout << d << std::endl;
}