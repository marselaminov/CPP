#include "PresidentialPardonForm.hpp"

PresidentalPardonForm::PresidentalPardonForm() {}

PresidentalPardonForm::PresidentalPardonForm(std::string target)
		: Form("PresidentalPardonForm", 25, 5) {
	this->target = target;
}

PresidentalPardonForm::PresidentalPardonForm(const PresidentalPardonForm &src) {
	*this = src;
}

PresidentalPardonForm & PresidentalPardonForm::operator=(const PresidentalPardonForm &src) {
	if (this == &src)
		return (*this);
	this->target = src.target;
	return (*this);
}

PresidentalPardonForm::~PresidentalPardonForm() {}

std::string	PresidentalPardonForm::getTarget() const {return (this->target);}

void	PresidentalPardonForm::setTarget(std::string target) {
	this->target = target;
}

void	PresidentalPardonForm::execute(const Bureaucrat &exec) const {
	if (!this->getSigned())
		throw (FormNotSignedException());
	if (exec.getGrade() <= this->getGrade2Exec()) {
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}
	else
		throw (Bureaucrat::GradeTooLowException());
}