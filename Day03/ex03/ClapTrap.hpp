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

	void			attack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	void			setName(const std::string src_name);
	std::string		getName() const;
	void			setHitPoints(unsigned int hit_points);
	unsigned int	getHitPoints() const;
	void			setEnergyPoints(unsigned int energy_points);
	unsigned int	getEnergyPoints() const;
	void			setAttackDamage(unsigned int attack_damage);
	unsigned int	getAttackDamage() const;

	void			info() const;

protected:
	std::string		name;
	unsigned int	hit_points;
	unsigned int	energy_points;
	unsigned int	attack_damage;
};

#endif