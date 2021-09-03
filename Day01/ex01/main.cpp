# include "Zombie.hpp"

int	main() {
	std::string	name[5];
	name[0] = "Rick";
	name[1] = "Deril";
	name[2] = "Michon";
	name[3] = "Carl";
	name[4] = "Hershal";
	for (int i = 0; i < 3; ++i) {
		int N = rand() % 4;
		int	index = rand() % 5;
		Zombie	*arr_zomb = zombieHorde(N, name[index]);
		for (int j = 0; j < N; ++j)
			arr_zomb[j].announce();
		delete [] arr_zomb;
	}
	return (0);
}