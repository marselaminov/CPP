#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("NoName"), grade(1) {
	std::cout << "Default bureaucrat is created!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
	std::cout << "Starting to creating a new Bureaucrat..." << std::endl;
	if (grade < 1) {
		std::cout << "Error : ";
		throw (GradeTooHighException());
	}
	if (grade > 150) {
		std::cout << "Error : ";
		throw (GradeTooLowException());
	}
	else
		this->grade = grade;
	std::cout << "Done! Bureaucrat [" << this->name << "] is created!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	*this = src;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &src) {
	if (this == &src)
		return (*this);
	this->grade = src.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return (RED"Level too high!"RESET);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return (RED"Level too low!"RESET);
}

std::string Bureaucrat::getName() const {return (this->name);}

int Bureaucrat::getGrade() const {return (this->grade);}

void	Bureaucrat::incrementGrade() {
	if(this->grade - 1 == 0) {
		std::cout << "This's the highest level : ";
		throw (GradeTooHighException());
	}
	this->grade--;
	std::cout << "Now Bureaucrat [" << getName() << "] has " << getGrade() << " grade." << std::endl;
}

void	Bureaucrat::decrementGrade() {
	if(this->grade + 1 == 151) {
		std::cout << "This's the lowest level : ";
		throw (GradeTooLowException());
	}
	this->grade++;
	std::cout << "Now Bureaucrat [" << getName() << "] has " << getGrade() << " grade." << std::endl;
}

void	Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
	}
	catch (const std::exception &e) {
		std::cout << "Bureaucrat [" << this->name << "] cannot sign the form ["
				  << form.getName() << "] because ";
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form &form) {
	try {
		form.execute(*this);
		std::cout << "Bureaucrat [" << this->name << "] executed form ["
				  << form.getName() << "]" << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Bureaucrat [" << this->name << "] cannot executed form ["
				  << form.getName() << "] because ";
		std::cout << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &src) {
	return (out << "<" << src.getName() << ">, bureaucrat grade <" << src.getGrade() << ">" << std::endl);
}