#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain {
public:
	std::string	ideas[100];
	Brain();
	Brain(Brain const &src);
	Brain & operator=(Brain const &src);
	virtual	~Brain();
};

#endif