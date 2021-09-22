#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
	Intern();
	Intern(Intern const &src);
	Intern& operator=(Intern const &src);
	virtual ~Intern();

	class FormNotFound : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	Form*	makeForm(std::string nameForm, std::string targetForm);
};

#endif