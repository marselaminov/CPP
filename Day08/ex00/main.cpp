#include "easyfind.hpp"

void	list_testing() {
	std::cout << MAGENTA"|-----LIST TESTING-----|"RESET << std::endl;
	std::cout << "Let's create list with one int that has value 1..." << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::list<int>	list(1, 1);
	std::cout << "List :" << std::endl;
	display(list);
	std::cout << "----------------------------------------------" << std::endl;

	std::cout << "Adding parameters on front..." << std::endl;
	for (int i = 0; i < 4; ++i)
		list.push_front(-i);
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Adding parameters on back..." << std::endl;
	for (int i = 2; i < 4; ++i)
		list.push_back(i);
	std::cout << "----------------------------------------------" << std::endl;

	std::cout << "List after adding parameters :" << std::endl;
	display(list);
	std::cout << "----------------------------------------------" << std::endl;

	try {
		std::cout << GREEN"Element found - "RESET <<*easyfind(list, 2) << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
	try {
		std::cout << *easyfind(list, 7) << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
}

void	vector_testing() {
	std::cout << MAGENTA"|-----VECTOR TESTING-----|"RESET << std::endl;
	std::cout << "Let's create vector with one int that has value 0..." << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::vector<int>	vector(1, 0);
	std::cout << "Vector :" << std::endl;
	display(vector);
	std::cout << "----------------------------------------------" << std::endl;

	std::cout << "Adding parameters on back..." << std::endl;
	for (int i = 1; i < 4; ++i)
		vector.push_back(i);
	std::cout << "----------------------------------------------" << std::endl;

	std::cout << "Vector after adding parameters :" << std::endl;
	display(vector);
	std::cout << "----------------------------------------------" << std::endl;

	try {
		std::cout << GREEN"Element found - "RESET <<*easyfind(vector, 0) << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
	try {
		std::cout << *easyfind(vector, -8) << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
}

void	map_testing() {
	std::cout << MAGENTA"|-----MAP TESTING-----|"RESET << std::endl;
	std::cout << "Let's create map with 5 int keys that has 5 string values..." << std::endl;
	std::map<int, std::string> map;
	map.insert(std::make_pair(3, "cat"));
	map.insert(std::make_pair(2, "dog"));
	map.insert(std::make_pair(5, "chicken"));
	map.insert(std::make_pair(4, "lion"));
	map.insert(std::make_pair(1, "spider"));
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "Map :" << std::endl;
	std::map<int, std::string>::const_iterator it;
	it = map.begin();
	while (it != map.end()) {
		std::cout << it->first << "=" << it->second << " " << std::endl;
		++it;
	}
	std::cout << "----------------------------------------------" << std::endl;

	try {
		std::cout << GREEN"Element found - "RESET << easyfind(map, 3)->first << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
	try {
		std::cout << easyfind(map, -4)->first << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
}

int	main() {
	list_testing();
	vector_testing();
	map_testing();
	return (0);
}