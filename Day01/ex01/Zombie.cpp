# include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) {
	this->name = name;
}

void	Zombie::setName(std::string name) {
	this->name = name;
	std::cout << "Zombies " << this->name << " was created" << std::endl;
}

void 	Zombie::announce(void) {
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombies " << this->name << " was killed" << std::endl;
}