#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

class Form;

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat & operator=(Bureaucrat const &src);
	virtual ~Bureaucrat();

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	std::string getName() const;
	int	getGrade() const;
	void	incrementGrade();
	void 	decrementGrade();
	void 	signForm(Form &form);

private:
	const std::string	name;
	int 				grade;
};

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &src);

#endif