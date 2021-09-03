# include <iostream>
# include <string>

# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define CYAN    "\x1b[36m"
# define RESET   "\x1b[0m"

int main() {
	std::string string("HI THIS IS BRAIN");
	std::string	*stringPTR = &string;
	std::string &stringREF = string;

	std::cout << GREEN"address of string : "RESET << &string << std::endl << std::endl;

	std::cout << YELLOW"address of string in stringPTR variable : "RESET << stringPTR << std::endl;
	std::cout << YELLOW"address of string in stringREF variable : "RESET << &stringREF << std::endl << std::endl;

	std::cout << CYAN"string value in stringPTR variable : "RESET << *stringPTR << std::endl;
	std::cout << CYAN"string value in stringREF variable : "RESET << stringREF << std::endl << std::endl;
}