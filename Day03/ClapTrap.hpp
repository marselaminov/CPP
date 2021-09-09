#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	ClapTrap & operator=(ClapTrap const &src);
	~ClapTrap();

	std::string	get_name() const;
	void	set_name(std::string const &src_name);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void info() const;

private:
	std::string	name;
	int	hit_points;
	int	energy_points;
	int	attack_damage;
};

#endif