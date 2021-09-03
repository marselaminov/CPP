# include "Karen.hpp"

enum	complain {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	DEFAULT
};

complain	handle_complain(std::string str) {
	complain	type = DEFAULT;
	if (str == "DEBUG")
		type = DEBUG;
	if (str == "INFO")
		type = INFO;
	if (str == "WARNING")
		type = WARNING;
	if (str == "ERROR")
		type = ERROR;
	return (type);
}

int error(int argc) {
	if (argc != 2)
		std::cout << "Wrong arguments!" << std::endl;
	return (1);
}

int main(int argc, char *argv[]) {
	Karen hey;

	if (argc != 2)
		return (error(argc));
	complain type = handle_complain(argv[1]);
	switch (type) {
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			hey.complain("DEBUG");
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			hey.complain("INFO");
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			hey.complain("WARNING");
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			hey.complain("ERROR");
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}