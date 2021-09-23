#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <exception>
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

class Convert {
public:
	Convert();
	Convert(std::string num);
	Convert(Convert const &src);
	Convert& operator=(Convert const &src);
	~Convert();

	void	toChar();
	void	toInt();
	void	toFloat();
	void	toDouble();

private:
	std::string	num;
};

#endif