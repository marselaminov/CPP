#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &src) {
	*this = src;
}

Intern& Intern::operator=(const Intern &src) {
	(void)src;
	return (*this);
}

const char* Intern::FormNotFound::what() const throw() {
	return (RED"Form not found!"RESET);
}

Form*	Intern::makeForm(std::string nameForm, std::string targetForm) {
	Form *form = NULL;

	std::string	namesArr[3];
	namesArr[0] = "ShrubberyCreationForm";
	namesArr[1] = "RobotomyRequestForm";
	namesArr[2] = "PresidentialPardonForm";

	int num = 0;
	while (num < 4) {
		if (namesArr[num] == nameForm)
			break;
		num++;
	}

	switch (num) {
		case 0:
			form = new ShrubberyCreationForm(targetForm);
			break;
		case 1:
			form = new RobotomyRequestForm(targetForm);
			break;
		case 2:
			form = new PresidentalPardonForm(targetForm);
			break;
		default:
			std::cout << "An intern cannot be created because : ";
			throw (Intern::FormNotFound());
			return (NULL);
	}
	std::cout << GREEN"Intern creates [" << form->getName() << "]"RESET << std::endl;
	return (form);
}

Intern::~Intern() {}