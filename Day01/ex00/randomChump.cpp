# include "Zombie.hpp"

void	randomChump(std::string name) {
	Zombie	on_stack;
	on_stack.getName(name);
	on_stack.announce();
}