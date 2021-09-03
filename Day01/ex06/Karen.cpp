# include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void 	Karen::debug() {
	std::cout << "This is a DEBUG message" << std::endl;
}

void 	Karen::info() {
	std::cout << "This is a INFO message" << std::endl;
}

void 	Karen::warning() {
	std::cout << "This is a WARNING message" << std::endl;
}

void 	Karen::error() {
	std::cout << "This is a ERROR message" << std::endl;
}

void 	Karen::complain(std::string level) {
	std::string	complain_arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	ptr_to_func	func[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (int i = 0; i < 4; i++) {
		if (level == complain_arr[i]) {
			std::cout << level;
			std::cout << " level:" << std::endl;
			(this->*func[i])();
			break;
		}
	}
}