#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm & operator=(RobotomyRequestForm const &src);
	virtual ~RobotomyRequestForm();

	std::string	getTarget() const;
	void	setTarget(std::string target);
	virtual void	execute(Bureaucrat const &exec) const;

private:
	std::string target;
};

#endif


