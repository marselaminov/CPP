#include <iostream>
#define GREEN   "\x1b[32m"
#define RESET   "\x1b[0m"

struct Data {std::string str;};

uintptr_t serialize(Data* ptr);

Data* deserialize(uintptr_t raw);

int	main() {
	std::cout << GREEN"Let's create Data structure!"RESET << std::endl;

	Data *data = new Data;
	data->str = "You know nothing, Jon Snow!";
	std::cout << "Data info : " << data->str << std::endl;

	std::cout << "-------------------------------------" << std::endl;

	std::cout << "Original pointer : " << data << std::endl;

	std::cout << "-------------------------------------" << std::endl;

	uintptr_t	sr = serialize(data); // an unsigned integer type
	std::cout << "Serialized pointer : " << sr << std::endl;

	std::cout << "-------------------------------------" << std::endl;

	Data	*dsr = deserialize(sr);
	std::cout << "Deserialized pointer : " << dsr << std::endl; // new pointer

	std::cout << "-------------------------------------" << std::endl;

	//	I am using a new pointer, but the information is displayed with the old one
	std::cout << "Data info : " << dsr->str << std::endl;

	std::cout << "-------------------------------------" << std::endl;

	std::cout << GREEN"Success!"RESET << std::endl;

	delete data;

	return (0);
}

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}