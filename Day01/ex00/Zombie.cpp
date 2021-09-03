# include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Zombies legunshi was created on the stack" << std::endl;
}

Zombie::Zombie(std::string name) {
	this->name = name;
	std::cout << "Zombies " << this->name << " was created on the heap" << std::endl;
}

void	Zombie::getName(std::string str) {
	this->name = str;
}

void 	Zombie::announce(void) {
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombies " << name << " was killed" << std::endl << std::endl;
}