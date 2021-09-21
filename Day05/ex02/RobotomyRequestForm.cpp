#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
		: Form("RobotomyRequestForm", 72, 45) {
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) {
	*this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
	if (this == &src)
		return (*this);
	this->target = src.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string	RobotomyRequestForm::getTarget() const {return (this->target);}

void	RobotomyRequestForm::setTarget(std::string target) {
	this->target = target;
}

void	RobotomyRequestForm::execute(const Bureaucrat &exec) const {
	if (!this->getSigned())
		throw (FormNotSignedException());
	if (exec.getGrade() <= this->getGrade2Exec()) {
		std::srand(std::time(NULL));
		int res = rand() % 2;

		std::cout << "***DRILL NOISE***" << std::endl;
		if (res)
			std::cout << this->target << " has been robotomized!" << std::endl;
		else
			std::cout << this->target << "'s robotomization failed!" << std::endl;
	}
	else
		throw (Bureaucrat::GradeTooLowException());
}