#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain {
public:
	Brain();
	Brain(Brain const &src);
	Brain & operator=(Brain const &src);
	virtual	~Brain();
	std::string	*ideas;
};

#endif