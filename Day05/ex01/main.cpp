#include "Form.hpp"

int main() {
	std::cout << MAGENTA"Creating bureaucrat object..."RESET << std::endl;
	Bureaucrat	bureaucrat("Carl", 87);
	std::cout << "Info about bureaucrat : ";
	std::cout << bureaucrat << std::endl;

	std::cout << BLUE"Creating new form blank..."RESET << std::endl;
	Form	form("Blank", 86, 85);
	std::cout << "Info about form : ";
	std::cout << form << std::endl;

	try {
		std::cout << YELLOW"Trying to sign blank form..."RESET << std::endl;
		bureaucrat.signForm(form);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << CYAN"Okay! We can increment Carl's grade!"RESET << std::endl;
	bureaucrat.incrementGrade();
	std::cout << "Info about bureaucrat after one increment : ";
	std::cout << bureaucrat << std::endl;

	try {
		std::cout << YELLOW"Trying to sign blank form again..."RESET << std::endl;
		bureaucrat.signForm(form);
	}
	catch (const std::exception &e) {
		std::cout << "Error : ";
		std::cerr << e.what() << std::endl;
	}
	std::cout << GREEN"Success"RESET << std::endl;
	return (0);
}