#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 145, 137) {
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) {
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
	if (this == &src)
		return (*this);
	this->target = src.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string	ShrubberyCreationForm::getTarget() const {return (this->target);}

void	ShrubberyCreationForm::setTarget(std::string target) {
	this->target = target;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &exec) const {
	if (!this->getSigned())
		throw (FormNotSignedException());
	if (exec.getGrade() <= this->getGrade2Exec()) {
		std::string filename = this->target + "_shrubbery";
		std::ofstream	file(filename);

		file << "--------------------------------" << std::endl;
		file << "---######----------######-------" << std::endl;
		file << "---######----------######-------" << std::endl;
		file << "---######----------######-------" << std::endl;
		file << "-----||--------------||---------" << std::endl;
		file << "-----||--------------||---------" << std::endl;
		file << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << std::endl;

		file.close();
		std::cout << "File created and waiting you in current directory!" << std::endl;
	}
	else
		throw (Bureaucrat::GradeTooLowException());
}