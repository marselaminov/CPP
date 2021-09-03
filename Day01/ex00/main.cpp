# include "Zombie.hpp"

int 	main() {
	Zombie	*on_heap;

	on_heap = newZombie("legunshi");
	on_heap->announce();
	delete	on_heap;
	randomChump("legunshi");
	return (0);
}