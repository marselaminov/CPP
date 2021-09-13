#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &src);
    FragTrap & operator=(FragTrap const &src);
    ~FragTrap();

    void	attack(std::string const & target);
    void	takeDamage(unsigned int amount);
    void	beRepaired(unsigned int amount);
    void	highFivesGuys();
    void	info() const;
};

#endif