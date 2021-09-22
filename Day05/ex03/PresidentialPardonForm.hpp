#ifndef PRESIDENTALPARDONFORM_H
# define PRESIDENTALPARDONFORM_H

#include "Form.hpp"

class PresidentalPardonForm : public Form {
public:
	PresidentalPardonForm();
	PresidentalPardonForm(std::string target);
	PresidentalPardonForm(PresidentalPardonForm const &src);
	PresidentalPardonForm & operator=(PresidentalPardonForm const &src);
	virtual ~PresidentalPardonForm();

	std::string	getTarget() const;
	void	setTarget(std::string target);
	virtual void	execute(Bureaucrat const &exec) const;

private:
	std::string target;
};

#endif