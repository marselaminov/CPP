#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm();

	std::string	getTarget() const;
	void	setTarget(std::string target);
	virtual void	execute(Bureaucrat const &exec) const;

private:
	std::string target;
};

#endif