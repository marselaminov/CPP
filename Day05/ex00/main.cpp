#include "Bureaucrat.hpp"

void	parameters_testing() {
	std::cout << GREEN"VALID PARAMETERS TESTING"RESET << std::endl;
	std::cout << "First test with highest grade : " << std::endl;
	try {
		Bureaucrat	first("Fred", -1);
		std::cout << "Info about Bureaucrat : ";
		std::cout << first << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Second test with lowest grade : " << std::endl;
	try {
		Bureaucrat	second("Jon", 151);
		std::cout << "Info about Bureaucrat : ";
		std::cout << second << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Third test with grade in the range from 1 to 150 : " << std::endl;
	try {
		Bureaucrat	third("Aleks", 16);
		std::cout << "Info about Bureaucrat : ";
		std::cout << third << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void	index_testing() {
	std::cout << CYAN"GRADE INCREMENT OR DECREMENT TESTING"RESET << std::endl;
	std::cout << "First test (valid) : " << std::endl;
	try {
		Bureaucrat	one("Rakel", 2);
		std::cout << "Info about Bureaucrat : ";
		std::cout << one << std::endl;

		one.incrementGrade();
		std::cout << "Info about Bureaucrat after increment : ";
		std::cout << one << std::endl;

		one.decrementGrade();
		one.decrementGrade();
		one.decrementGrade();
		std::cout << "Info about Bureaucrat after decrement : ";
		std::cout << one << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Second test (too much increment) : " << std::endl;
	try {
		Bureaucrat	two("Bob", 2);
		std::cout << "Info about Bureaucrat : ";
		std::cout << two << std::endl;

		two.incrementGrade();
		two.incrementGrade();
		std::cout << "Info about Bureaucrat after increment : ";
		std::cout << two << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Third test (too much decrement) : " << std::endl;
	try {
		Bureaucrat	three("Jim", 148);
		std::cout << "Info about Bureaucrat : ";
		std::cout << three << std::endl;

		three.decrementGrade();
		three.decrementGrade();
		three.decrementGrade();
		std::cout << "Info about Bureaucrat after increment : ";
		std::cout << three << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

int	main() {
	parameters_testing();
	index_testing();
	return (0);
}