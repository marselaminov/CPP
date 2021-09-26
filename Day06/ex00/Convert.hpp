#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <exception>
#include <cmath>
#include <cfloat>
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define RESET   "\x1b[0m"

class Convert {
public:
	Convert();
	Convert(std::string arg);
	Convert(Convert const &src);
	Convert& operator=(Convert const &src);
	~Convert();

	void	toChar();
	void	toInt();
	void	toFloat();
	void	toDouble();

private:
	std::string	arg;
};

#endif